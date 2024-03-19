#include<stdio.h>
#include<stdlib.h>

int main()
{
  long long int n,k,x;
  scanf("%lld %lld", &n,&k);
  if(n%k==0) puts("0");
  else if(n<=(k/2)) printf("%lld",n);
  else{
  while(1){
    x=llabs(k-n);
    if(x>llabs(k-x)){
      n=x;
    }
    else break;
  }
  printf("%lld\n",llabs(k-n));}
  return 0;
}
