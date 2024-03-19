
#include<stdio.h>
#include<math.h>

int main(void) {
	int l, r;
	int min= 2019;
	scanf("%d %d", &l, &r);
	for (int i = l; i <= r; i++) {
		for (int j = i + 1; j <= r; j++) {
			if ((i * j) % 2019 < min) {
				min = (i * j) % 2019;
			}
		}
	}
	printf("%d\n", min);
	return 0;
}