#include<stdio.h>
#include<string.h>
int main()
{
	int N;
	scanf("%d", &N);
	
	int A[N];
	int r;
	
	for(r=0; r<N; r++) scanf("%d", &A[r]);
	
	int c1 = N;
	int c2 = 0;
	
	for(r=0; r<N; r++){
		if(A[r] % 2 == 1) c1 = c1 - 1;
		else if (A[r] % 3 == 0 || A[r] % 5 == 0) c2++;
	}
	
	if(c1 == c2) printf("APPROVED");
	else printf("DENIED");
		
		return 0;
}