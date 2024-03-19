#include<stdio.h>
int main(void){
  int H,A;
  scanf("%d",&H);
  scanf("%d",&A);
 int i;
  for(i=0;H>0;i++){
  H=H-A;
  }
  printf("%d",i);
  return 0;
}
