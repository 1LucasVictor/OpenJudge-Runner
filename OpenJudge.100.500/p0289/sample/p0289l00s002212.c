#include <stdio.h>

int main(){
  int x,y,d,remain,pregcd=0,gcd=0,i;
  scanf("%d %d",&x,&y);

  if(x>y){
    d=x;
  }
  else{
    d=y;
  }

  remain=x%y;

  for(i=1;i<d;i++){
    if(x%i==0 && y%i==0){
      pregcd=i;
    }
    else {
      continue;
    }

    if(gcd<pregcd){
      gcd=pregcd;
    }
  }

  printf("%d\n",gcd);

  return 0;
}