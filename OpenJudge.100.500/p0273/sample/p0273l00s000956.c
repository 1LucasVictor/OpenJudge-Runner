#include <stdio.h>
int make(int n);
int n,F[44];
int main(){

  scanf("%d",&n);
  make(n);
  printf("%d\n",F[n]);
  return 0;
}

int make(int n){
  if(n==0||n==1)
    return F[n]=1;
  if(F[n]!=0)
    return F[n];
  return F[n]=make(n-2)+make(n-1);
}