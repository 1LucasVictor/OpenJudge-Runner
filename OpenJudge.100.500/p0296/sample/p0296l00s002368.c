#include<stdio.h>
#include<stdlib.h>
typedef struct node{
        int data;
        struct node *next;
        struct node *prev;
}stack;
stack *head = NULL;
stack *last = NULL;
void Push_back(int);
int Pop_back(void);
main()
{
        int x;
        scanf("%c", &x);
        do{
                if(x == '+' || x == '-' || x == '*'){
                        int a, b;
                        a = Pop_back();
                        b = Pop_back();
                        switch(x){
                        case '+':
                                Push_back(a + b);
                                break;
                        case '-':
                Push_back(a - b);
                break;
                        case '*':
                Push_back(a * b);
                break;
                        }
                }else{
                        Push_back(x - '0');
                }
        }while(scanf(" %c", &x) != EOF);
        printf("%d\n", Pop_back());
}
void Push_back(int data)
{
        stack *p;
        if((p = (stack*)malloc(sizeof(stack))) == NULL){
                fprintf(stderr, "Memory cannot allocate\n");
                exit(0);
        }
        p -> data = data;
        p -> next = NULL;
        p -> prev = last;
        last = p;
        if(head == NULL){
                head = p;
        }
}
int Pop_back(void)
{
        int pop_data;
        stack *p = last;
        if(head == NULL){
                return EOF;
        }
        pop_data = last -> data;
        if(last -> prev == NULL){
                head = NULL;
        }else{
                last -> prev -> next = NULL;
        }
        p = last;
    last = last -> prev;
        free(p);
        return pop_data;
}