#include <stdio.h>
#define N 10000

int isPrime(int);

int main(){

  int n, i, count=0;
  int a[N];

  scanf("%d", &n);
  for(i=0; i<n; i++){
    scanf("%d", &a[i]);
  }


  for( i=0;i<n;i++ ) {

    if( isPrime(a[i]) )  count++;

  }
  printf("%d\n", count);

  return 0;
}

int isPrime(int x){

  int j;

  if(x < 2) return 0;
  if(x == 2) return 1;
  if(x%2==0) return 0;
  for(j=3; j*j<=x; j+=2){
    if(x%j == 0) return 0;
  }

  return 1;
    
}



