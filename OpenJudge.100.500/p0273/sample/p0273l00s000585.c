#include<stdio.h>

int FI(int);

int F[44];

int main(){
  int n,i;

  scanf("%d",&n);
  for(i=0;i<n;i++)F[i]=-1;

  printf("%d\n",FI(n));

}

int FI(int n){

  if(n==0||n==1) return 1;

  if(F[n-1]==-1) F[n-1]=FI(n-1);
  if(F[n-2]==-1) F[n-2]=FI(n-2);

  return F[n-1]+F[n-2];
}
  

