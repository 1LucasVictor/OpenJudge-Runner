#include<stdio.h>
int main(){
  int x,y,d,z;
  scanf("%d %d",&x,&y);
  while(1){
    if(x >= y){
      if(y == 0){
	printf("%d\n",x);
	return 0;
      }
    d=x%y;
    x=y;
    y=d;
    }
    if(y == 0){
      printf("%d\n",x);
      break;
    }
    else {
      if(y == 0){
	printf("%d\n",y);
	return 0;
      }
      d=y%x;
      y=x;
      x=d;
      if(x == 0){
      printf("%d\n",y);
      break;
      }
    }
  }
  return 0;
}

