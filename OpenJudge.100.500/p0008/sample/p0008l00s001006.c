#include <stdio.h>
#define N 1000000
 
int main(void){
  int p[N];
  int i,j,n;
 
  p[0]=0; p[1]=0; p[2]=1;
  for( i=3;i<N;i++ ){
    p[i] = i%2;
  }
   
  for( i=2;i<N;i++ ){
    if( p[i]==1 ){
      for( j=i*2;j<N;j+=i )
    p[j]=0;
    }
  }
   
  for( i=1;i<N;i++ )
    p[i] += p[i-1];
  // p[i] : number of primes that is smaller than i
 
  while( 1 ){
    if( scanf("%d ",&n)!=1 )
      break;
    printf("%d\n",p[n] );
  }
 
 
  return 0;
}