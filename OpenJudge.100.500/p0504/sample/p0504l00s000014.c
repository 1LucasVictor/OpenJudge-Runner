#include<stdio.h>
int main(void){
  
  int H,A,i,c,d;
  scanf("%d %d",&H,&A);
  i = 0;
  for(i = i; H >= 0; i++){
    for (i = i; H/A >= 10; i = i + 10){
      H = H - A*10;
    }
    H = H - A;
  }
  printf("%d",i);
  
  return 0;
}