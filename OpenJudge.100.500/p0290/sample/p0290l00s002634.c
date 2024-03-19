#include<stdio.h>
int Prime(int x){
  int h;
  if ( x < 2 ) return 0;
  else if ( x == 2 ) return 1;
  if ( x % 2 == 0 ) return 0;
  for ( h = 3; h*h <= x; h+=2 ){
    if ( x % h == 0 ) return 0;
  }
  return 1;
}
int main(){
  int n, x, f;
  int count = 0;
  scanf("%d", &n);
  for ( f = 0; f < n; f++ ){
    scanf("%d", &x);
    if ( Prime(x) ) count++;
  }
  printf("%d\n", count);  
  return 0;
}

