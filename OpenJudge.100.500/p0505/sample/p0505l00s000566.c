#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int H;
	int N;
	
  	scanf("%d%d\n", &H, &N);
    
    int A[N];
    int sum = 0;
  	for(int i = 0; i < N; i++) {
    	scanf("%d", &A[i]);
      	sum += A[i];
    }
  
  	if(sum >= H) {
      printf("Yes");
    } else {
      printf("No");
    }
  	return 0;
}