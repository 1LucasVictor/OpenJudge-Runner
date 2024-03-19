#include <stdio.h>
#include <math.h>
int main(){
  int x,y;
  scanf("%d %d", &x,&y);
  int che=2*x;
  if(che>100){
    printf("No");
  }else{
  for(int i=0;i<x+1;i++){
    if(y==che){
      printf("Yes");
      break;
    }
    if(i==x){
      printf("No");
      break;
    }
    che +=2;
  }
}
  return 0;
}