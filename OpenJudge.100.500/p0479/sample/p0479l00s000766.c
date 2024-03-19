#include<stdio.h>
#include<math.h>

int main()
{
  int N,A[200000],B[200000];
  scanf("%d",&N);
  A[0] = 0;
  int j=0;
  int cnt=1;
  int onecnt = 0;
  
  for(int i=1;i<N;i++){
    scanf("%d",&A[i]);
    if(A[i] == 1) onecnt++;
    if(A[i-1] == A[i]){
      cnt++;
    }
    else{
      j = A[i]-1;
      B[j] = cnt;
      cnt = 1;
    }
  }
  
  B[0] = onecnt;
  for(int i=0;i<N;i++){
    printf("%d\n",B[i]);
  }
  
  return 0;
}