#include<stdio.h>
int main(void){
  long L,R;
  scanf("%ld",&L);
  scanf("%ld",&R);
  long min=2018;
    for(long i=L;i<=R-1;i++){
      for(long j=i+1;j<=R;j++){
        if( min > ((i%2019)*(j%2019)) % 2019){
          min = ((i%2019)*(j%2019))%2019;
        }
      }
    }
  printf("%ld",min);
  return 0;
}