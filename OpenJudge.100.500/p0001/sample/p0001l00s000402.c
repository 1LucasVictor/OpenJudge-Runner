#include <stdio.h>

//int digit( x );
int digit( x ){
  int c=1;
  while( (x / 10) != 0){
    x /= 10;
    c++;
  }
  return c;
}
int main(){
  int a, b;
  int x;

  while( scanf("%d %d", &a, &b) != EOF){
    x = digit( a+b );
    printf("%d\n", x);
  }
  return 0;
}