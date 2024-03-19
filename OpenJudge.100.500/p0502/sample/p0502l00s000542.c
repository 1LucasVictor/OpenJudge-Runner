#include<stdio.h>
int main()
{
  int N;
  scanf("%d",&N);
  int A[N];
  int i;
  for(i=0;i<N;i++){
    scanf("%d",&A[i]);
  }
  int flag=1;
  for(i=0;i<N;i++){
    if(A[i]%2==0){
      if(!((A[i]%3==0)||(A[i]%5==0))){
      flag=0;
      }
    }
  }
  if(flag=1){
    printf("APPROVED");
  }
  else{
    printf("DENIED");
  }
  return 0;
       }
       
 
