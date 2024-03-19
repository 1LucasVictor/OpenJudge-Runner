#include <stdio.h>
#include <stdlib.h>

#define SQ(x) ((x) * (x))

int compare_int(const void *a, const void *b)
{
	int lhs, rhs;
	lhs = *(int *)a;
	rhs = *(int *)b;
	return ((lhs > rhs) - (lhs < rhs));
}

int main(void)
{
	int n;
	int a[3];
	int i, j;
	
	scanf("%d", &n);
	for (i = 0; i < n; i++){
		for (j = 0; j < 3; j++){
			scanf("%d", &a[j]);
		}
		
		qsort(a, 3, sizeof(int), compare_int);
		
		if (SQ(a[0]) + SQ(a[1]) == SQ(a[2])){
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
	
	return (0);
}