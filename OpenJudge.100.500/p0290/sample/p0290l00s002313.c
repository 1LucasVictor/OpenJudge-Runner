#include<stdio.h>

int main(){
  int n,x,i;
  int c=0;
  scanf("%d", &n);
  for ( i = 0; i<n; i++ ){
    scanf("%d", &x);
    if ( primecheck(x)==1 ) 
        c++;
  }
  printf("%d\n", c);

  return 0;
}

int primecheck(int x){
  int i;
  if ( x < 2 ) 
    return 0;
  if ( x == 2 ) 
    return 1;
  if ( x%2 == 0 ) 
    return 0;
  for (i=3; i*i<=x; i+=2 ){
    if ( x%i == 0 )
     return 0;
  }
  return 1;
}
