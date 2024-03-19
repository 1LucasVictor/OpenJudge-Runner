#include<stdio.h>
int main(){
  int i,j,N,x;
  scanf("%d",&N);
  int A[N],B[N];
  for(i=0;i<N;i++)scanf("%d",&A[i]);
  for(i=0;i<N;i++){
    x=i;
    for(j=i;j<N;j++){
      if(A[j]>A[x])x=j; 
    }
  B[i]=A[x];
  A[x]=A[i];
  }
  for(i=0;i<N-1;i++){
    if(B[i]==B[i+1])break;
  }
  if(B[i]==B[i+1])printf("NO");
  else printf("YES");
  return 0;
}