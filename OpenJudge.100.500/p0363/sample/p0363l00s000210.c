#include<stdio.h>

int main(){
  int a,b,c,x = 0,y = 0;
  scanf("%d %d %d",&a,&b,&c);
  if(1 <= a&&10000 >= a&&1 <= b&&10000 >= b&&1 <= c&&10000 >= c){
    if(a > b){
      x = b;
      b = a;
      a = b;
    }
    if(a > c){
      x = a;
      y = b;
      a = c;
      b = x;
      c = y;
    }
    if(b > c){
      x = b;
      b = c;
      c = x;
    }
  }
  printf("%d %d %d\n",a,b,c);
  return 0;
}