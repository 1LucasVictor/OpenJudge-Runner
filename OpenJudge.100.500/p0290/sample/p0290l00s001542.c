#include<stdio.h>

int judgement(int);

int main(){

  int n,a[10000],i,c=0;

  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }

  for(i=0;i<n;i++){
    c=c+judgement(a[i]); //関数を用いる。素数であった場合、cに1が加算される。

  }
  printf("%d\n",c);

  return 0;
}

int judgement(int an){ //値が素数であるかどうかを判断するための関数。

  int j;
  if(an==1) return 0;
  if(an==2) return 1;
  if(an%2==0)return 0;

  for(j=3;j*j<=an;j++){
    if(an%j==0) return 0;
  }
  return 1;
}