#include<stdio.h>
#include<stdlib.h>
int main(void){
  int A[200000];
  int i,j;
  int N,flag;
  
  scanf("%d",&N);
  for(i=0;i<N-1;i++){
    scanf("%d ",&A[i]);
  }
  scanf("%d",&A[N-1]);
  
  for(i=0;i<N-1;i++){
    for(j=i+1;j<N;j++){
      if(A[i] == A[j]) {
        flag++;
        break;
      }
    }
    if(flag) break;
  }
  if(flag) printf("NO");
  else printf("YES");
  return 0;
}