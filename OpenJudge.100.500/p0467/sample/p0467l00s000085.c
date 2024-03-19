#include <stdio.h>
int main(void){
  int i;
  long long int a,b,c,k,w;
  w=0;
  scanf("%lld",&a);
  scanf("%lld",&b);
  scanf("%lld",&c);
  scanf("%lld",&k);

  for(i=0;i<k;i++){
    if(a>0){
      w++;
      a--;
    }else if(a==0&&b>0){
      b--;
    }else if(a==0&&b==0&&c>0){
      w=w-1;
    }
  }
  printf("%lld",w);
  return 0;
  }