#include<stdio.h>
int main(){
  int i,j,N,x;
  scanf("%d",&N);
  int A[N],B[N];
  for(i=0;i<N;i++)scanf("%d",&A[i]);
  for(i=0;i<N-1;i++){
    for(j=i+1;j<N;j++){
      if(A[i]==A[j])break;
    }
  if(A[i]==A[j])break;
  }
  if(A[i]==A[j])printf("NO");
  else printf("YES");
  return 0;
}