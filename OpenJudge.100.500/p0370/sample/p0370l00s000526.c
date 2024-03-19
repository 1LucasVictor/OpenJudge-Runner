#include<stdio.h>
int main()
{
    int a,b,sum,sub,mul,div;
    char op;
    while(1)
    {
        scanf("%d %s %d",&a,&op,&b);
        if(op=='+')
        {
            sum = a+b;
            printf("%d\n",sum);
        }
        else if(op=='-')
        {
            sub = a-b;
            printf("%d\n",sub);
        }
        else if(op=='*')
        {
            mul = a*b;
            printf("%d\n",mul);
        }
        else if(op=='/')
        {
            div = a/b;
            printf("%d\n",div);
        }
        else if(op=='?')
        {
           return 0;
        }
    }
    return 0;
}

