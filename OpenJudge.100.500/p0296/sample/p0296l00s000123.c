#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define OPERAND_MIN 1
#define OPERAND_MAX 1000000
#define OPERANDS_CNT_MIN 2
#define OPERANDS_CNT_MAX 100
#define OPERATOR_CNT_MIN 1 
#define OPERATOR_CNT_MAX 99
#define VALUE_IN_STACK_MIN -1000000000
#define VALUE_IN_STACK_MAX  1000000000
#define STACK_SIZE OPERATOR_CNT_MAX + OPERANDS_CNT_MAX

typedef struct stack_info
{
    int arr[STACK_SIZE];
    int top;
}STACK;

void init(STACK *p_st);
int is_empty(STACK *p_st);
int is_full(STACK *p_st);
int push(STACK *p_st, int key);
int pop(STACK *p_st, int *key);
int get_digit(int num);
int binary_operation(char ope, int x, int y);


int main(void)
{
    char str[get_digit(OPERAND_MAX) + 1];
    STACK stack;
    int x;
    int y;
    int ret;
    
    while(scanf("%s", &str[0]) != EOF)
    {
        if(str[0] == '-' || str[0] == '+' || str[0] == '*')
        {
            if(pop(&stack, &x) == -1)
            {
                return -1;
            }
            if(pop(&stack, &y) == -1)
            {
                return -1;
            }
            if(push(&stack, binary_operation(str[0], y, x)) == -1)
            {
                return -1;
            }
        }
        else if(str[0] >= '0' && str[0] <= '9')
        {
            if(push(&stack, atoi(&str[0])) == -1)
            {
                return -1;
            }
        }
        else
        {
            return -1;
        }
    }
    
    if(stack.top != 1)
    {
        return -1;
    }
    
    
    pop(&stack, &ret);
    printf("%d\n", ret);
        
    return 0;
}

void init(STACK *p_st)
{
    p_st->top = 0;
    
    return;
}

int is_empty(STACK *p_st)
{
    if(p_st->top == 0)
    {
        return 1;
    }
    
    return 0;
}


int is_full(STACK *p_st)
{
    if(p_st->top > STACK_SIZE)
    {
        return 1;
    }
    
    return 0;
}


int push(STACK *p_st, int key)
{
    if(is_full(p_st))
    {
        return -1;
    }
    
    p_st->top++;
    p_st->arr[p_st->top] = key;
    
    return 0;
}
int pop(STACK *p_st, int *key)
{
    if(is_empty(p_st))
    {
        return -1;
    }
    
    *key = p_st->arr[p_st->top];
    p_st->top--;
    
    return 0;
}

int get_digit(int num)
{
    int digit = 0;
    
    while(num !=  0)
    {
        num /= 10;
        digit++;
    }
    return digit;
}

int binary_operation(char ope, int x, int y)
{
    switch(ope)
    {
    case '+':
        return x + y;
    case '-':
        return x - y;
    case '*':
        return x * y;
    }
    
    return 0;
}