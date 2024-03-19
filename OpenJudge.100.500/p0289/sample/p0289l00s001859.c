#include<stdio.h>
void gcd(int x,int y);

int main(){
  int x,y;

  scanf("%d %d", &x, &y);
  gcd(x,y);
  return 0;
}

void gcd(int x,int y){
  int r, tmp;

  if(x > y){
    tmp=x;
    x=y;
    y=tmp;
  }

  while(x%y!=0){
    r=x%y;
    x=y;
    y=r;
  }
  printf("%d",r);
  printf("\n");
}

