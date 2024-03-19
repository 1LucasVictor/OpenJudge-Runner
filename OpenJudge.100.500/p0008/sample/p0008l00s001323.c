#include<stdio.h>

#define N 30

int calcSosu(int);

int main(){

  int num[N],i,j;
  for(i=0;i<N;i++)
    if(scanf("%d",&num[i])==EOF)break;
  for(j=0;j<i;j++)
    printf("%d\n",calcSosu(num[j]));

  return 0;
}

int calcSosu(int n){
  int t=2,f,i,j;

  if(n<2)return 0;
  else if(n==2)return 1;
  else if(n==3)return 2;
  for(i=3;i<=n;i=i+2){
    f=0;
    for(j=3;j<i;j=j+2){
      if(i%j==0)break;
      f=1;
    }
    if(f)t++;
  }
  return t;
}