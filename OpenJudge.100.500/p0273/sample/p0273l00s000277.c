#include<stdio.h>
int A[44];
int fi(int n){
  if(n==0 || n==1)return A[n]=1;
  if(A[n]!=-1)return A[n];
  return A[n]=fi(n-1)+fi(n-2);
}

int main(){
  int n,i;
  for(i=0;i<44;i++){
    A[i]=-1;
  }
  scanf("%d",&n);
  printf("%d\n",fi(n));
  return 0;
}

