
#include<stdio.h>
#include<stdlib.h>
int main(void) {
	int i, N, c = 0;
	int* x;
	scanf("%d", &N);
	x =(int*) malloc(N*sizeof(int));
	if (x == NULL)
	{
		puts("Failed");
		return 1;
	}
	
	for (i = 0; i < N; i++) {
		scanf("%d", &x[i]);
	}
	for (i = 0; i < N; i++)
	{
		if (x[i] % 2 == 0)
		{
			if (x[i] % 3 == 0 || x[i] % 5 == 0)
				c++;
		}
	}
	if (c > 0)printf("APPROVED");
	else printf("DENIED");
	return 0;
}