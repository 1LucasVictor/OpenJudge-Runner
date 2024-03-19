#include<stdio.h>

main(){
  int x,y,d=0;

  scanf("%d%d",&x,&y);
  while(1){
    d = x % y;
    if(d == 0){
      printf("%d\n",y);
      break;
    }
    x = y % d;
    if(x == 0){
      printf("%d\n",d);
      break;
    }
    y = d % x;
    if(y == 0){
      printf("%d\n",x);
      break;
    }
  }
}