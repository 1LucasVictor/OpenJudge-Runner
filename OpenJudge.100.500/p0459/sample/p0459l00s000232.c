#include<stdio.h>

int main(void){
  int a,b,c=0,i,x,y;
  scanf("%d %d",&x,&y);
  for(i=0;i<=x;i++){
    a=i;
    b=x-i;
    if(2*a+4*b==y){
      c=1;
      break;
    }
  }
  if(c==1){
    printf("Yes\n");
  }
  else{
    printf("No");
  }
  return 0;
}