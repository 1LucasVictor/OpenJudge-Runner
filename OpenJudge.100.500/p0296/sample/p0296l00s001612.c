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
#define IN_STR_MAX 8 /* OPERAND_MAX + \n */ 

typedef struct stack_info
{
    int arr[STACK_SIZE];
    int top;
}STACK;

STACK g_stack;

int schedule(STACK *p_st);
void init(STACK *p_st);
int is_empty(STACK *p_st);
int is_full(STACK *p_st);
int push(STACK *p_st, int key);
int pop(STACK *p_st, int *key);
int binary_operation(char ope, int x, int y);
int get_str(char *p_str, int min, int max);
int judge_constraint(int test_num, int min, int max);


int main(void)
{
    int ret;
    
    schedule(&g_stack);
    
    if(g_stack.top != 1)
    {
        return -1;
    }
    
    
    pop(&g_stack, &ret);
    printf("%d\n", ret);
        
    return 0;
}


int schedule(STACK *p_st)
{
    char str[IN_STR_MAX];
    int x;
    int y;
    
    while(get_str(str, 1, IN_STR_MAX) != -1)
    {
        if(str[0] == '+' || str[0] == '-' || str[0] == '*')
        {
            if(pop(p_st, &x) == -1)
            {
                return -1;
            }
            if(pop(p_st, &y) == -1)
            {
                return -1;
            }
            if(push(p_st, binary_operation(str[0], y, x)) == -1)
            {
                
                
                return -1;
            }
        }
        else if(str[0] >= '0' && str[0] <= '9')
        {
            if(push(p_st, atoi(&str[0])) == -1)
            {
                return -1;
            }
        }
        else
        {
            return -1;
        }
    }    
    
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
    if(p_st->top >= STACK_SIZE - 1)
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

int get_str(char *p_str, int min, int max)
{
    int cnt = 0;
    int ch;
    
    while((ch = getchar()) != -1)
    {
       
        if(ch == ' ' || ch == '\n')
        {
            p_str[cnt] = '\0';
            return ch;
        }
        
        p_str[cnt] = ch;
        cnt++;
        
        if(judge_constraint(cnt, min, max) == -1)
        {
            return -1;
        }
    }
    
    return -1;
}
int judge_constraint(int test_num, int min, int max)
{
    if(test_num < min || test_num > max)
    {
        return -1;
    }
    
    return 0;
}