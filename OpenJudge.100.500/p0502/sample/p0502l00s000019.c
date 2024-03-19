#include<stdio.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)



int main(){
  int N;
  int A[110];
  int count = 0;
  scanf("%d", &N);
  rep(i,N){
    scanf("%d", &A[i]);
    if(A[i]%2==0)
      {
        if(A[i]%3!=0&&A[i]%5!=0)
        {
          count++;
        }
      } 
}
  
  
 if(count == 0){
   printf("APPROVED\n");
 } else{
    printf("DENIED\n");
 }
 return 0;
}