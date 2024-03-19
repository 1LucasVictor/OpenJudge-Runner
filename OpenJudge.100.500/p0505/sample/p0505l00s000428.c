#include <stdio.h>

int main(void)
{
	int H, N, i;
	int A[1000];
	
	
	scanf("%d %d", &H, &N);
	
	for(i=0; i<N; i++){
		scanf("%d", &A[i]);
		H-=A[i];
		if(H<=0){ printf("Yes\n"); return 0; }
	}
	
	printf("No\n");
	
	return 0;
}
