#include<stdio.h>

int main(void){
   int n,fib[45],i,sum=0;
   scanf("%d",&n);
   fib[0]=fib[1]=1;
   fib[2]=2;
   if(n!=1 && n!=0){
      for(i=1;i<n;i++)
      fib[i+1]=fib[i]+fib[i-1];
   }

   printf("%d\n",fib[n]);

  return 0;
}
