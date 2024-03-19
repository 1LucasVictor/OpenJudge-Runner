#include<stdio.h>
#include<stdlib.h>

int main(){
  int x,y;

  scanf("%d %d",&x,&y);

  if(y%2 != 0)
    printf("No");
  else if(y <= 4 * x)
    printf("Yes");
  else
    printf("No");
}