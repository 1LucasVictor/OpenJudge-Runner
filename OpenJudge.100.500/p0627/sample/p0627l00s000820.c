#include <stdio.h>

int main(void){
  int i,a[3],max;
  int A,B;
  scanf("%d %d",&A,&B);
  a[0] = A + B;
  a[1] = A - B;
  a[2] = A * B;
  max = a[0];
  for(i = 1;i < 3; ++i){
    if(max < a[i])	max = a[i];
  }
  printf("%d\n",max);
}