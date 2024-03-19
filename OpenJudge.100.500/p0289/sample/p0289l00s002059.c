#include<stdio.h>
int main(void){
  long x,y,L,S,Sub;
  scanf("%d%d",&x,&y);
  if(x>y){L=x;S=y;}else{L=y;S=x;}
  while(1){
    if(L%S==0)
      break;
    Sub=L;
    L=S;
    S=Sub%S;
  }
  printf("%d\n",S);
  return 0;
}