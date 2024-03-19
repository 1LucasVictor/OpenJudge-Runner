#include<stdio.h>
#include<string.h>
#include<math.h>

int main(void){
  int X,Y;
  scanf("%d %d",&X,&Y);
  if(Y%2==0){
    if((X*2<=Y)&&(X*4>=Y)){
      printf("Yes");
    }else{
      printf("No");
    }
  }else{
    printf("No");
  }
   return 0;
}
