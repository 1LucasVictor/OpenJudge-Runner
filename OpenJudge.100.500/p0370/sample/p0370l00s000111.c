#include<stdio.h>
int main(void){
     int a,b,k;
     char op;
     while(op != '?'){
          scanf("%d %c %d",&a,&op,&b);
     
          if (op=='+'){
             k=a+b;
 printf("%d\n",k);

          }else if (op=='-'){
             k=a-b;
 printf("%d\n",k);

          }else if (op=='*'){
             k=a*b;
 printf("%d\n",k);

          }else if (op=='/'){
             k=a/b;
 printf("%d\n",k);

          }
          }
     return 0;
}