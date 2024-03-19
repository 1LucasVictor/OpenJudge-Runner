#include<stdio.h>

int main(void)
{
  long long min=10000;
  long long l,r;
  scanf("%lld %lld",&l,&r);


  for(long long i=l;i<r;i++){
    for(long long j=l+1;j<=r;j++){

      if((i*j)%2019<min){
        min=(i*j)%2019;
        if(min==0){
          puts("0");
          return 0;
        }
      }
    }
  }

  printf("%lld\n",min);
  return 0;
}
