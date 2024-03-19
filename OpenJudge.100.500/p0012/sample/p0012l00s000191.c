#include <stdio.h>

#define N_MAX 10
int stack[N_MAX];
int stack_p=0; //first points the head

void push(int n)
{
    stack[stack_p++]=n;
}
int pop(void)
{
    if(stack_p==0){ return -1; }
    return stack[--stack_p];
}

//#define DEBUG
int main(void)
{
    FILE *fp;
#ifdef DEBUG
    fp=fopen("input.txt","r");
#else
    fp=stdin;
#endif

    while(feof(fp)==0){
        int n; //n-th car (starts from 1)
        fscanf(fp,"%d\n", &n);
        //cars out
        if(n==0){
            printf("%d\n",pop());
        }
        //cars in
        else{
            push(n);
        }
    }
    return 0;
}