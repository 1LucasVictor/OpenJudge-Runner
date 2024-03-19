#include <stdio.h>

int main(void){
    int H,N;
    

    scanf("%d", &H);
    scanf("%d", &N);

    int i=0;
  int A[N];
  int sum = 0;
  for(i=0;i<N;i++){
	scanf("%d", &A[i]);
    sum = sum + A[i];
  }
   
  if(sum >= H){
	printf("Yes");
    return 0;
  }

    printf("No");
    return 0;
}