#include<stdio.h>
int main(){
  int x,y,z,n=0,GCD;
  scanf("%d%d",&x,&y);
  if(x>=y){
    z=x%y;
    for(n=1;n<=z;n++){
      if(y%n==0 && z%n==0){
	GCD=n;
      }
    }
  }
  else {
    z=y%x;
    for(n=1;n<=z;n++){
      if(x%n==0 && z%n==0){
	GCD=n;
      }
    }
  }
  printf("%d\n",GCD);
  return 0;
}