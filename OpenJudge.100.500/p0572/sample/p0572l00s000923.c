#include <stdio.h>

int main(void){
  long long L,R,i,j;
  int min=2020;
  scanf("%lld %lld",&L,&R);
  for(i=L;i<=R;i++){
    for(j=i+1;j<=R;j++){
      if(i*j%2019==0){
        min=0;
        break;
      }
      if(min>(i*j%2019)) min=i*j%2019;
    }
  }
  printf("%d\n",min);

  return 0;
}
