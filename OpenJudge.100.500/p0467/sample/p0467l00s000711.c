#include <stdio.h>
int main()
{
  long a,b,c,k,i;
  long sum=0;
  int f=0;
  scanf("%ld",&a); scanf("%ld",&b); scanf("%ld",&c); scanf("%ld",&k);
  for(i=0;i<=k;i++){
    if(f==0&&a<=k){
      sum+=a;
      f=1;
      k=k-a;
    }
      if(f==1&&b<=k){
          f=2;
          k=k-b;
      }
    if(f==2&&0<k){
      sum=sum-k;
    }
  }
  printf("%ld",sum);
  return 0;
}