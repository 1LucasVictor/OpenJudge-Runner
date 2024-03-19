#include<stdio.h>
int main(void){
  long L,R;
  scanf("%ld",&L);
  scanf("%ld",&R);
  int min=2018;
    for(int i=L;i<=R-1;i++){
      for(int j=i+1;j<=R;j++){
        if( min > (i*j) % 2019){
          min = ((i%2019)*(j%2019))%2019;
        }
      }
    }
  printf("%d",min);
  return 0;
}