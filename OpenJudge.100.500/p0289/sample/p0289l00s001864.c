#include <stdio.h>

void swap(int,int);
int gcd(int,int);

int main() {
  int x,y,g;
  scanf("%d%d",&x,&y);
  g = gcd(x,y);
  printf("%d\n",g);
  return 0;
}

int gcd(int x,int y){
  int d;
  while (y>0) {
    d = x%y;
    x = y;
    y = d;
  }
  return x;
}

void swap(int a,int b){
  int temp;
  temp = a;
  a = b;
  b = temp;
}