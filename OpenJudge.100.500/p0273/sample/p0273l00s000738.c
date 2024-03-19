#include<stdio.h>

int A[1000];

int f(int n){
  if(n==0 || n==1)return A[n] = 1;
  if(A[n] != -1)return A[n];
  return A[n] = f(n-1)+f(n-2);
}

int main(){
  int n,i;
  for(i=0;i<1000;i++){
    A[i]=-1;
  }

  scanf("%d",&n);
  printf("%d\n",f(n));

  return 0;
}

