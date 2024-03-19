#include<stdio.h>
#define NUMBER 100
int main(void){
    int i,c=0,a,b,x[NUMBER];
    char op;
    for(i=0;1;i++){
       scanf("%d %c %d",&a,&op,&b);
       if(op=='+')
         x[i]=a+b;
       else if(op=='-')
         x[i]=a-b;
       else if(op=='*')
         x[i]=a*b;
       else if(op=='/')
         x[i]=a/b;
       else
         break;
       c++;
    }
    for(i=0;i<c;i++){
       printf("%d\n",x[i]);
    }
    return 0;
}
