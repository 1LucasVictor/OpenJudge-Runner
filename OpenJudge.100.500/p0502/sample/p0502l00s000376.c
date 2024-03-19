#include<stdio.h>

int main(void){
  int N,i,A[1001],count1=0,count2=0;
  
  scanf("%d",&N);
  
  for(i=0;i<N;i++){
    scanf("%d",&A[i]);
  }
  
  for(i=0;i<N;i++){
    if(A[i]%2==0){
      count2++;
      if(A[i]%3==0 || A[i]%5==0) count1++;
     }
  }

  if(count1!=count2) printf("DENIED");
  else printf("APPROVED");
  
  return 0;
}
