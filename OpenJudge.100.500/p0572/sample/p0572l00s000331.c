#include<stdio.h>
#include<math.h>

int main(void) {
	int l, r;
	int min= 2019;
	int f = 0;
	scanf("%d %d", &l, &r);
	for (int i = l; i <= r; i++) {
		if (f == 1) {
			break;
		}
		for (int j = i+1; j <= r; j++) {
			if (j - i > 2019) {
				f = 1;
				break;
			}
			if ((i * j) % 2019 < min) {
				min = (i * j) % 2019;
			}else if(i*j == 0){
				min = 0;
				f = 1;
				break;
			}
		}
	}
	printf("%d\n", min);
	return 0;
}
