#include <stdio.h>
#include <stdlib.h>

#define SQ(x) ((x) * (x))

int compare_int(const void *a, const void *b)
{
	int lhs, rhs;
	lhs = *(int *)a;
	rhs = *(int *)b;
	return (int)(lhs > rhs) - (int)(lhs < rhs);
}

int main(void)
{
	int n;
	int len[3];
	int i, j;
	
	scanf("%d", &n);
	for (i = 0; i < n; i++){
		for (j = 0; j < 3; j++){
			scanf("%d", &len[j]);
		}
		
		qsort((void *)len, 3, sizeof(int), compare_int);
		
		if (SQ(len[0]) + SQ(len[1]) == SQ(len[2])){
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
}