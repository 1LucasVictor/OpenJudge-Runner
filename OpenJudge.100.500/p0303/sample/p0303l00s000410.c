#include<stdio.h>

#define M 100000

int n,k;
int T[M];

int check(long p){
  int i,j=0,s;

    for(i=0;i<k;i++){
      s=0;
      while(s+T[j]<=p){
	s+=T[j];
	j++;
	if(j==n) return n;
      }
    }
    return j;
}

int kai(){
  long right=100000*10000;
  long left=0,man;
  int v;

  while(right-left>1){
    man=(right+left)/2;

    v=check(man);
    if(v>=n)right=man;
    else left=man;
  }

  return right;
}

int main(){
  int i;
  long a;
  
  scanf("%d%d",&n,&k);
  for(i=0;i<n;i++) scanf("%d",&T[i]);
  a=kai();
  printf("%d\n",a);

  return 0;
}