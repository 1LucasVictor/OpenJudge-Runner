#include <stdio.h>

int main() {
	int i = 0, n, car[100] = {0};
	do{
		scanf("%d", &n);
		if(n == 0) {
			i--;
			printf("%d\n", car[i]);
		} else {
			car[i] = n;
			i++;
		}
	} while( i != 0 );
	return 0;
}