#include <stdio.h>
#define N 44
int fibonacci(int);
int F[N];
int main(){
  int n,i;
  for(i=0;i<N;i++){
    F[i]=-1;
  }
  scanf("%d",&n);
  printf("%d\n", fibonacci(n));
  return 0;
}
  
int fibonacci(int n){
  int i;
  if(n == 0 || n == 1)
    return F[n] = 1 ;
  if( F[n]!= -1)
    return F[n];
  else
     return F[n] = fibonacci(n - 2) + fibonacci(n - 1);
	 }