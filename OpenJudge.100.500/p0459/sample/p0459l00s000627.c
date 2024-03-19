#include <stdio.h>
int main(void){
  int X,Y,i;
  scanf("%d %d",&X,&Y);

  for(i=0;i<=X;i++){
    if(2*(X-i) + 4*i == Y){
        printf("Yes\n");
        return 0;
      }
  }
  printf("No\n");
  return 0;
}