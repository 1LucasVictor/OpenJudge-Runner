#include<stdio.h>
 
int main(void){
  int X,Y;
  scanf("%d %d",&X,&Y);
  for(int i=0;i<=X;i++){
    if((2*i+(X-i)*4)==Y){
      printf("Yes\n");
      return 0;
    }
  }
  printf("No\n");
  return 0;
}