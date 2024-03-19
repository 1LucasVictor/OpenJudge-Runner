#include<stdio.h>
int main(void){
  int x,a,b;
  scanf("%d%d%d",&x,&a,&b);
  puts(a>=b?"delicious":b>x+a?"dangerous":"safe");
  return 0;
}