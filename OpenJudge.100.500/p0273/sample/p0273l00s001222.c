#include<stdio.h>

#define N 44
int F[N];

int fibonacci(int n);

main(){
  
  int n,i,sum=0;
  for(i=0;i<N;i++){
    F[i]= 0;
  } 
  
  scanf("%d",&n);
  sum=fibonacci(n);
  
  printf("%d\n",sum);
 
  return 0;
}

int fibonacci(int n)
{
  if (n==0 || n==1){
    return F[n]=1;
  }
  if (F[n]!=0){
    return F[n];
  }
  return F[n]=fibonacci(n-2)+fibonacci(n-1);
}