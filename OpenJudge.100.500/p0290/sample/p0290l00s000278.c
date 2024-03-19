#include <stdio.h>
int main(){
  int n,i,j,x,A[10000],count=0;
    scanf("%d", &n);
  for(i=0;i<n;i++)scanf("%d",&A[i]);
  for(i=0;i<n;i++){
    x=0;
    for(j=2;j<A[i];j++){
      if(A[i]%j==0)x++;;
    }
    if(x==0)count++;
  }
  printf("\n%d\n",count);
  return 0;
}
