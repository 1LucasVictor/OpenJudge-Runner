#include <stdio.h>

int main(void)
{
	int i, j;
	int N;

	scanf("%d", &N);

	for( i = 0; i < 9; i++ ) {
		for ( j = 0; j < 9; j++ ) {
			if( (i+1) * (j+1) == N ) {
				printf("Yes");
				return 0;
			}
		}
	}

	printf("No");
	return 0;
}