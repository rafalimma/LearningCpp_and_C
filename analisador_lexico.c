// lexer_bin.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef enum {
    TOK_EOF,
    TOK_BIN,      // número binário (lexema com 0/1 ou 0b101)
    TOK_IDENT,    // identificador
    TOK_TRUE,     // true
    TOK_FALSE,    // false
    TOK_AND,      // &
    TOK_OR,       // |
    TOK_LSHIFT,   // <<
    TOK_RSHIFT,   // >>
    TOK_LAND,     // &&
    TOK_LOR,      // ||
    TOK_NOT,      // !
    TOK_ASSIGN,   // =
    TOK_LPAREN,   // (
    TOK_RPAREN,   // )
    TOK_SEMI,     // ;
    TOK_UNKNOWN
} TokenType;

const char* token_type_name(TokenType t) {
    switch(t){
        case TOK_EOF: return "EOF";
        case TOK_BIN: return "BIN";
        case TOK_IDENT: return "IDENT";
        case TOK_TRUE: return "TRUE";
        case TOK_FALSE: return "FALSE";
        case TOK_AND: return "AND";
        case TOK_OR: return "OR";
        case TOK_LSHIFT: return "LSHIFT";
        case TOK_RSHIFT: return "RSHIFT";
        case TOK_LAND: return "LAND";
        case TOK_LOR: return "LOR";
        case TOK_NOT: return "NOT";
        case TOK_ASSIGN: return "ASSIGN";
        case TOK_LPAREN: return "LPAREN";
        case TOK_RPAREN: return "RPAREN";
        case TOK_SEMI: return "SEMI";
        default: return "UNKNOWN";
    }
}

typedef struct {
    TokenType type;
    char *lexeme;
} Token;

typedef struct {
    const char *src;
    size_t pos;
    size_t len;
} Scanner;

int is_bin_digit(char c){
    return c == '0' || c == '1';
}

void scanner_init(Scanner *s, const char *src){
    s->src = src;
    s->pos = 0;
    s->len = strlen(src);
}

char peek(Scanner *s){
    if (s->pos >= s->len) return '\0';
    return s->src[s->pos];
}

char peek_next(Scanner *s){
    if (s->pos + 1 >= s->len) return '\0';
    return s->src[s->pos + 1];
}

char advance(Scanner *s){
    if (s->pos >= s->len) return '\0';
    return s->src[s->pos++];
}

void skip_whitespace(Scanner *s){
    while (isspace(peek(s))) advance(s);
}

Token make_token(TokenType type, const char *start, size_t length){
    Token t;
    t.type = type;
    t.lexeme = (char*)malloc(length + 1);
    memcpy(t.lexeme, start, length);
    t.lexeme[length] = '\0';
    return t;
}

void free_token(Token *t){
    if (t->lexeme) free(t->lexeme);
    t->lexeme = NULL;
}

/* reconhece identificadores e palavras reservadas */
Token scan_ident_or_keyword(Scanner *s){
    size_t start = s->pos;
    while (isalnum(peek(s)) || peek(s) == '_') advance(s);
    size_t len = s->pos - start;
    const char *startptr = s->src + start;
    if (len == 4 && strncmp(startptr, "true", 4) == 0) return make_token(TOK_TRUE, startptr, len);
    if (len == 5 && strncmp(startptr, "false", 5) == 0) return make_token(TOK_FALSE, startptr, len);
    return make_token(TOK_IDENT, startptr, len);
}

/* reconhece números binários: aceita "0b1010" ou apenas sequência de 0/1 */
Token scan_binary(Scanner *s){
    size_t start = s->pos;
    // se começar com '0' e próximo é 'b' ou 'B', consome prefixo 0b
    if (peek(s) == '0' && (peek_next(s) == 'b' || peek_next(s) == 'B')) {
        advance(s); // '0'
        advance(s); // 'b'
        while (is_bin_digit(peek(s))) advance(s);
    } else {
        // sequência de 0/1
        while (is_bin_digit(peek(s))) advance(s);
    }
    size_t len = s->pos - start;
    return make_token(TOK_BIN, s->src + start, len);
}

Token next_token(Scanner *s){
    skip_whitespace(s);
    char c = peek(s);
    if (c == '\0') return make_token(TOK_EOF, "", 0);

    // operadores de dois caracteres - verificar primeiro
    char n = peek_next(s);
    if (c == '&' && n == '&') { advance(s); advance(s); return make_token(TOK_LAND, "&&", 2); }
    if (c == '|' && n == '|') { advance(s); advance(s); return make_token(TOK_LOR, "||", 2); }
    if (c == '<' && n == '<') { advance(s); advance(s); return make_token(TOK_LSHIFT, "<<", 2); }
    if (c == '>' && n == '>') { advance(s); advance(s); return make_token(TOK_RSHIFT, ">>", 2); }

    // operadores de um caractere
    if (c == '&') { advance(s); return make_token(TOK_AND, "&", 1); }
    if (c == '|') { advance(s); return make_token(TOK_OR, "|", 1); }
    if (c == '!') { advance(s); return make_token(TOK_NOT, "!", 1); }
    if (c == '(') { advance(s); return make_token(TOK_LPAREN, "(", 1); }
    if (c == ')') { advance(s); return make_token(TOK_RPAREN, ")", 1); }
    if (c == '=') { advance(s); return make_token(TOK_ASSIGN, "=", 1); }
    if (c == ';') { advance(s); return make_token(TOK_SEMI, ";", 1); }

    // identificador ou palavra reservada
    if (isalpha(c) || c == '_'){
        return scan_ident_or_keyword(s);
    }

    // número binário: começa com 0/1 or 0b prefix
    if (is_bin_digit(c) || (c == '0' && (n == 'b' || n == 'B'))) {
        return scan_binary(s);
    }

    // caso não reconhecido
    // pega o caractere único como UNKNOWN
    advance(s);
    return make_token(TOK_UNKNOWN, s->src + s->pos - 1, 1);
}


unsigned long long bin_to_ull(const char *lexeme){
    const char *p = lexeme;
    if (p[0] == '0' && (p[1] == 'b' || p[1] == 'B')) p += 2;
    unsigned long long val = 0;
    while (*p){
        if (*p == '0' || *p == '1'){
            val = (val << 1) + (*p - '0');
        } else break;
        p++;
    }
    return val;
}
