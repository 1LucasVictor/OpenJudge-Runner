#include<stdio.h>
#include<math.h>

int main()
{
	int N;
	scanf("%d", &N);
	
	int A[N-1];
	int B[N];
	int r;
	for(r=0; r<N; r++) B[r]=0;
	
	for(r=0; r<N-1; r++){
		scanf("%d", &A[r]);
		B[A[r]-1]++;
	}
	
	for(r=0; r<N; r++) printf("%d\n", B[r]);
	
	return 0;
	
}
