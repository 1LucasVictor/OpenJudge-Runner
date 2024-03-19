#include <stdio.h>
int main(void) {
	
	int a,b,c;
	int x, z=0;

	scanf("%d %d %d\n", &a, &b, &c);
	if (1<=a && a <= 10000 && 1<=b && b <= 10000 && 1<=c && c <=10000) {
		if (a <= b) {
			x = a;
			while (1) {
				if ((c%x) == 0) z++;
				x++;
				if (x==(b+1)) break;
			}
		}
	}
	
	printf("%d\n", z);
	
	return 0;
}