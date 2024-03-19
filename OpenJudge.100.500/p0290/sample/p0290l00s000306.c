#include<stdio.h>

int main(){
  int n, i, j, x, sum=0;
  scanf("%d",&n);
  for( i = 1 ; i <= n ; i++ ){
    scanf("%d",&x);
    if( x == 2 ) sum++;
    else {
      for( j = 3 ; j < x ; j++ ){
        if( x % j == 0 ) break;
        else if( j == x-1 ) sum++;
      }
    }
  }
  printf("%d\n",sum);
  return 0;
}
