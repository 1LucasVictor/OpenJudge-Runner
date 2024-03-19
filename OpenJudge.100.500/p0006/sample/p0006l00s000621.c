#include <stdio.h>

int main(void) {
	int syakkin = 100000;
	int i, n;

	scanf("%d", &n);
	for (i = 1; i <= n; i++){
		syakkin = syakkin*1.05;
		if (syakkin % 1000 != 0){
			syakkin=syakkin / 1000;
			syakkin++;
			syakkin=syakkin * 1000;
		}
	}

	printf("%d\n", syakkin);

	return 0;
}