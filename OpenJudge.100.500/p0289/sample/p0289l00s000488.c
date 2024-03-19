#include<stdio.h>

int swap(g, h) {
    int d;
    d = g;
    g = h;
    h = d;
    
    return g, h;
}

		int gcd(x, y) {
			int i;
			if ( x < y ) {
				swap(x, y);
			}
			while ( y > 0 ) {
				i = x % y;
				x = y;
				y = i;
			}
			return x;
}

    int main() {
		int a, b, c;
		scanf("%d %d", &a, &b);
		c = gcd(a, b);
		printf("%d\n", c);
    
    return 0;
}
