#include<stdio.h>
int main()
{
	int A, B, C, D;
	scanf("%d %d %d %d", &A, &B, &C, &D);
	if ((A < D) && (C < B))
		if (B > D)
			if (C > A)
				printf("%d", D - C);
			else
				printf("%d", D - A);
		else
			if (C > A)
				printf("%d", B - C);
			else
				printf("%d", B - A);
	else
		printf("0");
	return 0;
}
