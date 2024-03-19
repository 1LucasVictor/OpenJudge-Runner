#include <stdio.h>

int main(void){
   long long int a,b;
   long long int A,B,temp;
   long long int gcd,lcm;
   
   while(scanf("%lld %lld",&a,&b)!=EOF){
       A=a;
       B=b;
       while(A%B!=0){
           temp=A%B;
           A=B;
           B=temp;
       }
       gcd=B;
       lcm=a*b/gcd;
       
       printf("%lld %lld\n",gcd,lcm);
   }
   return 0;
}

