#include <stdio.h>
int gcd(int,int);

int main(){
  int x, y;
  
  scanf("%d%d",&x,&y);

  printf("%d\n",gcd(x,y));

  return 0;
}

int gcd(int a, int b){
  int r;
  int tmp;
  if(a < b){
    tmp = b;
    b = a;
    a = tmp;
  }
  while(b > 0){
    r = a % b;
    a = b;
    b = r;
  }

  return a;
}

