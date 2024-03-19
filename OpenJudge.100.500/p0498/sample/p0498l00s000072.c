#include <stdio.h>



int main()
{	
	int N;
	scanf("%d", &N);
	N = (N / 2) + (N % 2);
	printf("%d\n",N);

	return 0;
}