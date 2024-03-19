#include<stdio.h>
int main(){
  int H,N,i,S=0;
  scanf("%d%d",&H,&N);
  int A[N];
  
  for(i=0;i<N;i++){
    scanf("%d",&A[i]);
    S+=A[i];
   }
  if(S>=H)printf("Yes");
  else printf("No");
  
  
  return 0;
 }