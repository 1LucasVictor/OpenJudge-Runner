#include<stdio.h>
void swap(int *,int *);
int gcd(int,int);
int main(){
  int x,y;
  int i;
  scanf("%d%d",&x,&y);


  printf("%d\n",gcd(x,y));
  return 0;
}
int gcd(int x,int y){
  int r = 1;
  if(x<y){
    swap(&x,&y);
  }
    while(r != 0){
    r = x % y;
    x = y;
    y = r;
  }
  return x;
}

void swap(int *x,int *y){
  int r;
  r = *x;
  *x = *y;
  *y = r;
}

