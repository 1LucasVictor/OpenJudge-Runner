#include<stdio.h>
#include<stdlib.h>
int top=0;//指向最后一个元素
int S[1000];
void push(int x)
{
    top++;
    S[top]=x;
}
int pop()
{
    top--;
    return S[top+1];
}
int main()
{
    char s[100];
    while(scanf("%s",s)!=EOF)//空格截止
    {
        if(s[0]=='+')
        {
            int a=pop();
            int b=pop();
            push(a+b);
        }
        else if(s[0]=='-')
        {
            int b=pop();
            int a=pop();
            push(a-b);
        }
        else if(s[0]=='*')
        {
            int a=pop();
            int b=pop();
            push(a*b);
        }
        else
        {
            push(atoi(s));
        }
    }
    printf("%d\n",pop());
    return 0;
}

