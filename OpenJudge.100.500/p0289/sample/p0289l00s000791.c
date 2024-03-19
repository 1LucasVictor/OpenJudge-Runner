#include <stdio.h>
#include <math.h>
#define Aa 1000
int main(){
  int A[Aa];
  int n=0,i=0,j=0,v=0,k=0,x,y,r;
  scanf("%d%d",&x,&y);
  if( x < y){
    r = x;
    x = y;
    y = r;
  }
  while(y > 0){
    r = x%y;
    x = y;
    y = r;
  }
  printf("%d\n",x);
  return 0;
}

