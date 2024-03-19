#include <stdio.h>
#include <string.h>
#define lop(i, n) for(i=0; i<n; i++)

int compare_int(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}

int main()
{
	int n, i;
	long int A[200000];
	
	scanf("%d", &n);
	
	lop(i, n){
		scanf("%ld", &A[i]);
	}
	
	qsort(A, n, sizeof(long int), compare_int);
	
	for(i=1; i<n; i++){
		if(A[i-1]==A[i])printf("NO");
	}
	
	printf("YES");
	
return 0;
}
