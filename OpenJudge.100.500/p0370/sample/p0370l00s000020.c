#include<stdio.h>
#include<stdlib.h>

int main()
{
       int a,b;
       char op;
       while(1){
       scanf("%d %c %d",&a,&op,&b);
       if(op == '?'){
             exit(0);
       }
       if(op == '+')
       printf("%d\n",a + b);
       if(op == '-')
       printf("%d\n",a - b);
       if(op == '*')
       printf("%d\n",a * b);
       if(op == '/')
       printf("%d\n",a / b);
       }
       return 0;
}
