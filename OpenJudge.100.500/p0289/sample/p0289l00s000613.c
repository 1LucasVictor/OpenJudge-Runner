#include <stdio.h>

int gcd(int x,int y);

int main(void){

  int x,y;

  scanf("%d%d",&x,&y);
  printf("%d\n",gcd(x,y));

  return 0;
}

int gcd(int x,int y){

  int tmp,r;
  
  if(x<y){
    tmp = x;
    x = y;
    y = tmp;
  }

  r = x%y;
  while(r != 0){
    x = y;
    y = r;
    r = x % y;
  }

  return y;

}

