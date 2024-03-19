#include <stdio.h>
int main() {
  int N,i,j,c=0,flag=1,b;
  int A[100];
  scanf("%d",&N);
  for(i=0;i<N;i++) {
    scanf("%d",&A[i]);
  }
  while(flag) {
    flag=0;
    for(j=N-1;j>=1;j--) {
      if(A[j]<A[j-1]) {
	b = A[j];
	A[j] = A[j-1];
	A[j-1] = b;
	c++;
	flag = 1;
      }
    }
  }
    for(i=0;i<N;i++) {
    printf("%d ",A[i]);
    }
    printf("\n");
    printf("%d\n",c);

    return 0;
}