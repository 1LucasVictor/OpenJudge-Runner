#include<stdio.h>

int main(){
  
  int x,y,n;
  scanf("%d%d",&x,&y);
  if(x>=y){
    n=x%y;
    while(n!=0){
      x=y;
      y=n;
      n=x%y;
    }
    printf("%d\n",y);
  }
  else{
    n=y%x;
    while(n!=0){
      y=x;
      x=n;
      n=y%x;
    }
    printf("%d\n",x);
  }
  return 0;
}