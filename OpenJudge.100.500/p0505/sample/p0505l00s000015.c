#include <stdio.h>

int main(void)
{
	int H, N, i;
	int A;
	
	
	scanf("%d %d", &H, &N);
	
	for(i=0; i<N; i++){
		scanf("%d", &A);
		H-=A;
	}
	
	if(H<=0){ printf("Yes\n"); }
	else{printf("No\n");}
	
	return 0;
}