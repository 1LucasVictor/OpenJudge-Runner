#include<stdio.h>
int main(){
  int x,y,z;
  int a;
  scanf("%d%d",&x,&y);
  if(x<y){
    z=x;
    x=y;
    y=z;
  }

  a=x%y;
  while(a!=0){
    x=y;
    y=a;
    a=x%y;
  }

  printf("%d\n",y);
  return 0;
}

