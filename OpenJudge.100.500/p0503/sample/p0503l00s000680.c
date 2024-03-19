#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(void){
  int j,N,K,i,min;
  long A[200000]={};
  long ans;
  if(scanf("%d",&N)>1){
    exit(0);
  }
  for(i=0;i<N;i++){
   if(scanf("%ld",&A[i])>1){
    exit(0);
   }
  }
  for(i=0;i<N;i++){
    for(j=i+1;j<N;j++){
      if(A[i]==A[j]){
	printf("NO");
	goto out;
      }
    if(i==(N-2) && j==(N-1)){
      printf("YES");
    }
   }
  }
 out:
  return 0;
}
