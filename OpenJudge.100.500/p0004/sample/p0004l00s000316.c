#include <stdio.h>

int Max(int, int);

int main(void){
  int a,b;
  int c,d; // cは最大公約数、dは最小公倍数。

  while(scanf("%d %d" ,&a ,&b) != EOF){

    c = Max(a , b );
    d =  a / c * b;

    printf("%d %ld\n" ,c ,d);

  }

  return 0;
}


int Max(int a, int b){

  int rem;

  if(a == 0 || b == 0 ) return 0;

  while( ( rem = a % b ) != 0 ){

    a = b;
    b = rem;

  }

  return b;
}