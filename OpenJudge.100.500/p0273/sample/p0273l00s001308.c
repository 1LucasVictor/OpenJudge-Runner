#include<stdio.h>

int num[50];

int fibonacci(int n){
  if (n==0 || n==1) return num[n]=1;
  if(num[n]!=-1) return num[n];
  return num[n]=fibonacci(n-1)+fibonacci(n-2);
}

int main(){
  int n,i;
  
  for(i=0;i<45;i++) num[i]=-1;

  scanf("%d",&n);
  printf("%d\n",fibonacci(n));

  return 0;
}

