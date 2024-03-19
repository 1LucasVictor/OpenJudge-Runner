#include <stdio.h>

int main(void) {
	int A, B, C;
	scanf("%d%d%d", &A, &B, &C);
	if(A>C)
	printf("%s", "NO");
	else
	{
	if(C-A>B)
	printf("%s", "NO");
	else
	printf("%s", "YES");
	}
	
	return 0;
}
