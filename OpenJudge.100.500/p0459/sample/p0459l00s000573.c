#include<stdio.h>
int main(){
  int x,y;
  scanf("%d%d",&x,&y);
  if(y/2<x || 4*x<y || y%2!=0)	printf("No");
  else{
    printf("Yes");
  }
  return 0;
}
