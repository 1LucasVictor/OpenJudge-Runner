#include<stdio.h>
int main(void)
{
    int a,b,ans;
    char op;
    while(1){
        scanf("%d %c %d",&a,&op,&b);
        if(op=='?') break;
        if(op=='+') ans=a+b;
        else if(op=='-') ans=a-b;
        else if(op=='*') ans=a*b;
        else if(op=='/') ans=a/b;
        printf("%d\n",ans);
    }
    return 0;
}
