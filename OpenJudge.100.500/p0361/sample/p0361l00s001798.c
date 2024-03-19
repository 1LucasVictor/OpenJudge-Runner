#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int S;

	scanf("%d", &S);

	printf("%d:%d:%d\n", S/3600, (S % 3600)/60, ((S % 3600) % 60));

	return 0;
}
