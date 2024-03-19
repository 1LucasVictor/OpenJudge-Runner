#include <stdio.h>
int main(void)
{

	long a, b, c, d, tmp;
	while (scanf("%ld %ld", &a, &b) != EOF) {
    		d = a * b;
		if(a < b) {
			tmp = a;
			a = b;
			b = tmp;
		}

	c = a % b;
	while(c != 0) {
		a = b;
		b = c;
		c = a % b;
	}

	printf("%ld %ld\n", b, d / b);
	}
   
       return 0;
}
