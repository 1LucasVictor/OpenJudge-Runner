#include<stdio.h>

int main( ){

  int x,x1,y,z,i,j,s=0,z1;

  scanf("%d%d",&x,&y);


  if(x<y){

    x1=x;
    x=y;
    y=x1;

  }

  z=x%y;

  while(z != 0){
    
    x=y;
    y=z;
    z=x%y;

  }
    
  printf("%d\n",y);

  return 0;
}