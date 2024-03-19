#include <stdio.h>

int main() {
	int i = 0, k = 0, n, car[10] = {0}, out[10] = {0};
	do{
		scanf("%d", &n);
		if(n == 0) {
			i--;
			out[k] = car[i];
			k++;
		} else {
			car[i] = n;
			i++;
		}
	} while( i != 0 );
	for(i = 0; i < k; i++) printf("%d\n", out[i]);
	return 0;
}