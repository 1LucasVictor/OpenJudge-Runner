#include <stdio.h>
int main(){
 int N;
 scanf("%d",&N);
 int A[N];
 int judge=1;
 for(int i=0;i<N;i++){
  scanf("%d",&A[i]);
  if(A[i]%2==0){
  if(A[i]%3==0||A[i]%5==0);
   else judge=0;
   }
 }
 if(judge==1)printf("APPROVED");
   else printf("DENIED");
 return 0;
}