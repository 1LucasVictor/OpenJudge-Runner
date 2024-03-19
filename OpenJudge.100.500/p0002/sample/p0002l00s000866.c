#include<stdio.h>

void swap(long *a , long *b) {
	long tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main () {
	long n , a , b , c;
	long i;
	scanf("%ld" , &n);
	for(i = 0; i < n; i++) {
		scanf("%ld %ld %ld" , &a , &b , &c);

		if (a < b) swap(&a , &b);
		if (a < c) swap(&a , &c);
		if (b < c) swap(&b , &c);

		if (b * b + c * c == a * a) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	return 0;
}