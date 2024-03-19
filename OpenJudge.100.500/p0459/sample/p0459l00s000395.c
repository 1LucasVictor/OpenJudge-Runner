#include<stdio.h>
int main(void){
int x,y;
  scanf("%d%d",&x,&y);
 
  for(int a=0;a<=x;a++){
    int b=x-a;
    if(2*a+4*b==y){printf("Yes");
                   return 0;
                  }
  }
  printf("No");
  return 0;
}