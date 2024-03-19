#include<stdio.h>
#include<stdlib.h>
int f(int);
int *F;
int main(){
  int n,i;
  scanf("%d",&n);
  F = (int*)malloc(sizeof(int) * n);
  for(i=0; i<n; i++) F[i] = 0;
  printf("%d\n",f(n));
  return 0;
}
int f(int n){
  if(n == 1 || n == 0) return F[n] = 1;
  if(F[n]) return F[n];
  return F[n] = f(n - 2) + f(n - 1);
}