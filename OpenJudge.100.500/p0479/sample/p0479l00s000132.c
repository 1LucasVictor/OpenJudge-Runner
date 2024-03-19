#include<stdio.h>
 
int main(void){
  int N;
  scanf("%d",&N);
  int A[200010]={0};
  int c[200010]={0};
  for(int i=2;i<N+1;i++){
    scanf("%d",&A[i]);
  }
  for(int i=2;i<N+1;i++){
    c[A[i]]++;
  }
  for(int i=1;i<N+1;i++){
    printf("%d\n",c[i]);
  }
  return 0;
}