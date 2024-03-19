#include <stdio.h>
int main()
{
  long a,b,c,k;
  long sum=0;
  int f=0;
  scanf("%ld",&a); scanf("%ld",&b); scanf("%ld",&c); scanf("%ld",&k);
  if(a<k){
    sum+=a;
    f=1;
    k=k-a;
  }
  else sum=k;
  if(f==1&&b<k){
    f=2;
    k=k-b;
  }
  if(f==2) sum=sum-k;
  printf("%ld",sum);
  return 0;
}