#include <stdio.h>

int main(void){
  int n;
  int crs;
  int a[10];

  crs = 0;
  while( 1 ){
    if( scanf("%d ",&n)==EOF )
      break;
    if( n==0 ){
      printf("%d\n",a[--crs]);
    }else{
      a[crs++] = n;
    }
  }
  return 0;
}