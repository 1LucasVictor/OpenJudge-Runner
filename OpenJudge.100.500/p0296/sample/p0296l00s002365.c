#include <stdio.h>
#include <malloc.h>
#include <assert.h>
#include <ctype.h>
#include <memory.h>

typedef struct StkDat {
    int key;
    struct StkDat *next;
} StkDat;
typedef struct Stack {
    size_t len;
    StkDat *top;
} Stack;
#define stack_isempty(s) ((s)->top == NULL ? 1 : 0)
void stack_init(Stack *stk_hdr) {
    stk_hdr->len = 0;
    stk_hdr->top = NULL;
}
int stack_pop(Stack *stk_hdr) {
    assert(stk_hdr->len != 0);
    stk_hdr->len--;
    int key = stk_hdr->top->key;
    StkDat *old_head = stk_hdr->top;
    stk_hdr->top = stk_hdr->top->next;
    free(old_head);
    return key;
}

void stack_push(Stack *stk_hdr, const int key) {
    StkDat *new_dat = (StkDat *)malloc(sizeof(StkDat));
    new_dat->key = key;
    new_dat->next = stk_hdr->top;
    stk_hdr->top = new_dat;
    stk_hdr->len++;
}

#define TOKEN_INT   1
#define TOKEN_OP    2
#define TOKEN_OTHER 3
#define TOKEN_LAST  4

typedef struct Token {
    int kind;
    const char *start;
    const char *end;
    union {
        int val;
        const char *name;
    };
} Token;

Token token;
const char *stream;

void next_token() {
    token.start = stream;
    if(isdigit(*stream)) {
        int val = 0;
        while(isdigit(*stream)) {
            val *= 10;
            val += *stream++ - '0';
        }
        token.kind = TOKEN_INT;
        token.val = val;
    } else {
        token.kind = TOKEN_OTHER;
        switch(*stream) {
        case '+':
        case '-':
        case '*':
            token.kind = TOKEN_OP;
            token.name = stream;
            break;
        case '\0':
            token.kind = TOKEN_LAST;
            break;
        }
        stream++;
    }
    token.end = stream;
}

void lexing(const char *source) {
    stream = source;
    next_token();
    Stack stk;
    stack_push(&stk, token.val);
    while(token.kind != TOKEN_LAST) {
        next_token();
        if(token.kind == TOKEN_INT) stack_push(&stk, token.val);
        else if(token.kind == TOKEN_OP) {
            int x, y;
            switch(*token.name) {
            case '+':
                y = stack_pop(&stk);
                x = stack_pop(&stk);
                stack_push(&stk, x + y);
                break;
            case '-':
                y = stack_pop(&stk);
                x = stack_pop(&stk);
                stack_push(&stk, x - y);
                break;
            case '*':
                y = stack_pop(&stk);
                x = stack_pop(&stk);
                stack_push(&stk, x * y);
                break;
            default:
                break;
            }
        }
    }
    printf("%d\n", stack_pop(&stk));
}

int main() {
    char chr[512];
    scanf("%[^\n]", chr);
    lexing(chr);
    return 0;
}
