#include<stdio.h>

int dptw[50];

int fibonacci(int n){
  if(n==0||n==1)return dptw[n]=1;
  if(dptw[n]!=-1)return dptw[n];
  return dptw[n] = fibonacci(n-1)+fibonacci(n-2);
}

int main(){
  int Ntw,i;
  for(i=0;i<50;i++)dptw[i]=-1;

  scanf("%d",&Ntw);
  printf("%d\n",fibonacci(Ntw));

  return 0;
}

    

