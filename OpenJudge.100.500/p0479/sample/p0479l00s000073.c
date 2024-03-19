#include <stdio.h>
#include <string.h>
#define lop(i, n) for(i=0; i<n; i++)

int main()
{
	int n, i;
	int A[200000];
	int S[200000]={0};
	A[0]=-1;
	
	scanf("%d", &n);
	
	for(i=1; i<n; i++){
		scanf("%d", &A[i]);
		S[A[i]-1]++;
    }
	
	lop(i, n){
		printf("%d\n", S[i]);
	}
	
return 0;
}