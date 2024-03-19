#include<stdio.h>

void swap(int, int);
int gcdh(int, int);

int main(){
  int a, b;
  
  scanf("%d%d", &a, &b);

  swap(a, b);

  //in here, why is not changeing place a and b ? 

  printf("%d\n", gcdh(a, b));
  
  return 0;
}

void swap(int x, int y){
  int t;
  if(x < y){
    t=x;
    x=y;
    y=t;
  }

}

int gcdh(int m, int n){
  int t;
  while(n>0){
    t = m % n;
    if(t==0) break;
    m = n;
    n = t;
  }
  return n;
}