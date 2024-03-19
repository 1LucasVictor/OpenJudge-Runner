#include<stdio.h>
int main(void){
  int x, y;
  scanf("%d%d", &x, &y);
  if(y%2==0 && y>=2*x && y<=4*x){
    printf("Yes");
  }
  else{
    printf("No");
  }
  return 0;
}