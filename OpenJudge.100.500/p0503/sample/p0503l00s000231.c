#include <stdio.h>
#include <stdlib.h>

int f(const void *a,const void *b){
  return *(int*)a-*(int*)b;
}

int main(){
  int A[200002];
  int N,c=1;
  scanf("%d\n",&N);
  for(int i=0;i<N;i++)
    scanf("%d",A+i);
  qsort(A,N,sizeof(int),f);
  for(int i=0;i<N-1;i++){
    if(A[i]==A[i+1]){
      c=0;
      break;
    }
  }
  if(c==1) printf("YES\n");
  else printf("NO\n");
  return 0;
}