#include<stdio.h>

int main(){
  int N,i,j,A[200000],sum=0,count;
  
  scanf("%d",&N);
  
  for(i=0;i<N;i++){
    scanf("%d",&A[i]);
  }
  for(i=0;i<N;i++){
    count = 0;
    for(j=0;j<N-1;j++){
      if(A[j] ==i+1)
        count +=1;
    }
    printf("%d\n",count);
  }
  
  return 0;
}