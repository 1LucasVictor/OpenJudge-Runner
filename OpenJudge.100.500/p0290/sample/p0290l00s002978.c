#include<stdio.h>
#include<math.h>
#define N 10000

int main(){
  int i,j,n,A[N],sum=0;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&A[i]);
    if(A[i]==2)
      sum++;
  }
  for(i=0;i<n;i++){
    for(j=2;j<(int)(sqrt(A[i]));j+2){
      if(A[i]%j==0)
      break;
    }
    if(A[i]%j!=0){
      sum++;
    }
  }
  printf("%d\n",sum);
  return 0;
}