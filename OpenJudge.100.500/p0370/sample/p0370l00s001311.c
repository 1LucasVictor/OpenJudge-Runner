#include<stdio.h>
int main(void){
        int a,b,c;
        char d;
        while(1){
         scanf("%d %c %d",&a,&d,&b);
         if(d=='?'){
          break;
         }
         else if(d=='+'){
          c=a+b;
         }
         else if(d=='-'){
          c=a-b;
         }
         else if(d=='*'){
          c=a*b;
         }
         else if(d=='/'){
          c=a/b;
         }
         printf("%d\n",c);
        }
    return 0;
}