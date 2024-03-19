#include <stdio.h>
#include <math.h>

int main(){
  int N=0;
  int A[200010]={0};
  int count[200010]={0};
  scanf("%d",&N );
  for(int i=1;i<N;i++){
    scanf("%d",&A[i] );
    count[A[i]-1]++;
  }
  for(int i=0;i<N;i++){
    printf("%d\n",count[i]);
  }

  return 0;
}