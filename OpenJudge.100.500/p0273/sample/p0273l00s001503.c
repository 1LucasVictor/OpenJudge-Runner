#include<stdio.h>
#define MAX 44
int F[MAX]={0};

int fibonacci(int n){
  if(n==0 || n==1)return F[n]=1;
  
  if(F[n]!=0)return F[n];

  return F[n]=fibonacci(n-2)+fibonacci(n-1);
}


int main(){
  int n;
  int res;
  scanf("%d",&n);

  res=fibonacci(n);
  
  printf("%d\n",res);
  return 0;
}

