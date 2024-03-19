#include<stdio.h>

int gcd(int ,int );

int main(){

  int x,y,n;
  
  scanf("%d %d",&x,&y);
  n=gcd(x,y);

  printf("%d\n",n);

  return 0;
}

int gcd(x,y){
  int n,x1,y1;

  if(x>y){
    y1=y;
    x1=x;
  }else if(x<y){
    y1=x;
    x1=y;
  }

  while(y1>0){
    n=x1%y1;
    x1=y1;
    y1=n;
  }

  return x1;

}

