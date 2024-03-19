#include<stdio.h>
int main(){
int num;
while(scanf("%d",&num)!=EOF){
   printf("%d\n",primes(num));
   }
   return 0;
   }
 int primes(int num){
  int primes=0;
  int i=2;
  for(;i<=num;i++)
     if(isprime(i))
	   primes++;
  return primes;
  }
  
  int isprime(int i){
  int j=2;
   for(;j<=i-1;j++)
     if(i%j==0)
	   return 0;
return 1;
}
  