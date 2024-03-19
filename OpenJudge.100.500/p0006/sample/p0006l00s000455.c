#include <stdio.h>

int interest (int i){
	return (int)(i * 1.05 + 0.999);
}

int main(void) {
	int n, debt = 100;
	scanf ("%d", &n);
	while (n > 0){
		debt = interest (debt);
		n--;
	}
	printf ("%d\n", debt * 1000);
	return 0;
}