#include <stdio.h>
#include <stdlib.h>
int main(){
  int X,Y;
  scanf("%d %d",&X,&Y);
  if(Y%2==1){
    printf("No");
    return 0;
  }
  if(Y-2*X>=0 && 4*X-Y>=0) printf("Yes");
  else printf("No");
  return 0;
}