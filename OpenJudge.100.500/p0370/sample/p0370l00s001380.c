#include<stdio.h>
int main(void)
{
    char op;
    int a,b;
    do{
    scanf("%d %c %d",&a,&op,&b);
    if(op=='+'){
        printf("%d\n",a+b);
    }
    else if(op=='-'){
        printf("%d\n",a-b);
    }   
    else if(op=='*'){
        printf("%d\n",a*b);
    }   
    else if(op=='/'){
        printf("%d\n",a/b);
    }
    }while(op!='?');
return 0;
}