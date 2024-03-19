#include <stdio.h>
int main(void)
{
    int a,b;
    char op;
    while(1){
        scanf("%d",&a);
        getchar();
        scanf("%c%d",&op,&b);
        if(op=='+')
            printf("%d\n",a+b);
        else if(op=='-')
            printf("%d\n",a-b);
        else if(op=='*')
            printf("%d\n",a*b);
        else if(op=='/')
            printf("%d\n",a/b);
        else
            break;
    }
    return 0;
}