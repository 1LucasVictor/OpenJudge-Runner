#include <stdio.h>

int main(int argc, char *args[])
{
	int a,b,c=0;

	scanf("%d %d %d", &a, &b, &c);

	if( (a < b) && (b < c) ) {
		printf("Yes\n");
	}
	else {
		printf("No\n");
	}

	return 0;
}