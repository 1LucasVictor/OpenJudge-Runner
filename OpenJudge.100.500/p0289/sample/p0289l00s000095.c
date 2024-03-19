#include <stdio.h>

int gcd(int ,int );

int main(){
  int x,y,res;

  scanf("%d%d",&x,&y);

  res = gcd(x,y);

  printf("%d\n",res);
  
  return 0;
}

int gcd(int x,int y){
  int n,d;
  
  if(x > y){
    n = y;
    d = x % y;
  }
  else{
    n = x;
    d = y % x;
  }

  //printf("%d %d\n",n,d);

  if(d == 0){
    return n;
  }

  if(d != 0){
    return gcd(n,d);
  }
}

