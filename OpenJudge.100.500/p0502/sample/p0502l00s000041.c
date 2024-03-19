#include <stdio.h>

int main() {
  int N,result=0;
  scanf("%d",&N);
  int A[N];
  for(int i=0;i<N;i++) {
    scanf("%d",&A[i]);
  }
  for(int i=0;i<N;i++) {
    if(A[i]%2==0) {
      if(A[i]%3!=0 && A[i]%5!=0) {
	printf("DENIED");
	result++;
	break;
      }
    }
  }
   if(result==0) {
     printf("APPROVED");
   }
   return 0;
}
  