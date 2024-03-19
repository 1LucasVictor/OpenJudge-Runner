#include <stdio.h>

int main(){

  int x,y;

  int temp=0;

  scanf("%d %d",&x,&y);

  while(x%y!=0){
    temp=y;
    y=x%y;
    x=temp;
  }

  printf("%d\n",y);

  return 0;
}

