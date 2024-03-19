#include<stdio.h>
int primeNumber(int);

int main(){
  int n, i, x, sum=0;
  scanf("%d",&n);
  for( i = 1 ; i <= n ; i++ ){
    scanf("%d",&x);
    sum += primeNumber(x);
  }
  printf("%d\n",sum);
  return 0;
}

int primeNumber(int x){
  int i;
  if( x <= 1 ) return 0;
  else if( x == 2 ) return 1;
  else {
    for( i = 2 ; i < x ; i++ ){
      if( x % i == 0 ) return 0;
    }
    return 1;
  }
}
