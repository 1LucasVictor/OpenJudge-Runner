#include <stdio.h>
int main(){
  int n,i,j,x,A[10000],count=0;
    scanf("%d", &n);
  for(i=0;i<n;i++)scanf("%d",&A[i]);
  for(i=0;i<n;i++){
    x=0;
    if(A[i]%2==0)x=1;
    for(j=3;j<A[i]/2;j+2){
      if(A[i]%j==0){
        x=1;
      break;
      }
    }
    if(A[i]==2)count++;
    else if(x==0 && A[i]!=0 && A[i]!=1)count++;
  }
  printf("%d",count);
  printf("\n");
  return 0;
}
