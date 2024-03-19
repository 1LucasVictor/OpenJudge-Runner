#include<stdio.h>
int main(){
  int x,y,i,M;
  scanf("%d%d",&x,&y);
    while(M = x%y){
    x = y;
    y = M;
  }
  printf("%d\n",y);
  return 0;
}
