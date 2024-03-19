#include <stdio.h>
#include <math.h>
int main(){
  int x,y,i;
  scanf("%d %d", &x,&y);
  int che=2*x;
  if(che>100){
    printf("No");
  }else{
  for(i=0;i<x;i++){
    if(y==che){
      printf("Yes");
      break;
    }
    che +=2;
  }
  if(i==x){
    printf("No");
  }
}
  return 0;
}
