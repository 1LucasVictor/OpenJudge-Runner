#include <stdlib.h>
#include <stdio.h>

int main(){

	int a, b, c, d, e, k;
	scanf("%d", &a );
	scanf("%d", &b );
	scanf("%d", &c );
	scanf("%d", &d );
	scanf("%d", &e );
	scanf("%d", &k );

	if ((b - a) > k || (c - a) > k || (d - a) > k || (e - a) > k || (c - b) > k || (d - b) > k || (e - b) > k || (d - c) > k || (e - c) > k || (e - d) > k)
		printf(":(\n");
	else
		printf("Yay!\n");

	return 0;
	
}