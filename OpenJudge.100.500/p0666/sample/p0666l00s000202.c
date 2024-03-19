#include <stdio.h>

int main(int argc, char *argv[])
{
	int X, A, B;
	scanf("%d %d %d", &X, &A, &B);

	if ( B-A <= 0 ){
		printf("delicious\n");
	} else if ( B-A <= X ){
		printf("safe\n");
	} else {
		printf("dangerous\n");
	}
	return 0;
}
