#include <stdio.h>
#define N 50
int fibonacci(int);
int F[N];
int main(){
  int n,i;
  
  for(i=0;i<N;i++) F[i]=-1;
  scanf("%d",&n);
  printf("%d\n",fibonacci(n));
  return 0;
}
  
int fibonacci(int n){
  if(n==0 || n==1) return F[n]=1;
  if(F[n]!=-1) return F[n];
  //if(F[n]==n) return F[n];
  return F[n]=fibonacci(n-1)+fibonacci(n-2);
}


  

