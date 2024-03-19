#include <stdio.h>

int main (int argc, const char * argv[]) {
    int a,b,i,g,l,a2,b2;
	
	while (scanf("%d%d",&a, &b) != EOF) {
		i = 2;
		g = 1;
		a2 = a;
		b2 = b;
		while (a/2 >= i) {
			if (a%i == 0 && b%i == 0) {
				a = a/i;
				b = b/i;
				g = g*i;
			}
			i++;
		}
		l = (a2/g) * b2;
		printf("%d %d\n", g, l);
	}
    return 0;
}