
#include <stdio.h>

int main (void) {
	int a;
	int b;
	int c;
	int i;
	int k;
	
	i = 0;
	while (scanf("%d%d", &a,&b) != EOF) {
		c = a + b;
		k = 1;
		while ((c / 10) != 0 ) {
			c = c / 10;
			k++;
		}
		printf("%d\n", k);
	}
    return 0;
}