#include<stdio.h>

int main(void)
{
  long long min=5000000000;
  long long l,r;
  scanf("%lld %lld",&l,&r);


  for(int i=l;i<r;i++){
    for(int j=l+1;j<=r;j++){
      if((i*j)%2019==0){
        puts("0");
        return 0;
      }
      if((i*j)%2019<min&&i<j){
        min=(i*j)%2019;
      }
    }
  }

  printf("%lld\n",min);
  return 0;
}
