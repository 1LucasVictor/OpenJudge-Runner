#include<stdio.h>
int main(void){
  int a,b;
  int x,y,z,t;
  scanf("%d%d",&a,&b);
  x=a+b;y=a-b;z=a*b;
  if(x<y){
    t=x;x=y;y=t;
  }
  if(y<z){
    t=y;y=z;z=t;
  }
  if(x<y){
    t=x;x=y;y=t;
  }
  printf("%d",x); 
 
  return 0;
}