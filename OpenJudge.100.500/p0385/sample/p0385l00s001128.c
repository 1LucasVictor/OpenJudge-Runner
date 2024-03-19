#include <stdio.h>
int main(void){
   int n,a;
   
   while(1){
       scanf("%d",&n);
    if(n==0)
        break;
   int sum = 0;
    while(n){
        a = n % 10;
        sum += a;
        n = n / 10;
    }
    printf("%d\n",sum);
    
   }
   return 0;
}

