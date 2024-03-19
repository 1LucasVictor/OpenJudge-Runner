#include<stdio.h>

int IsPrime(int n) {
    for(int i = 2; i*i <= n; i++) {
        if(n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main(void){

int n,count = 0;
long long p;

scanf("%d",&n);
 for(int i = 0; i < n; i++) {
     scanf("%lld",&p);

       if(IsPrime(p)){
       count++;
       }
   }
printf("%d\n",count);
return 0;
   }
