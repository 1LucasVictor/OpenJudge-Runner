#include<stdio.h>

int main(void)
{
	int i, j, n,d = 0, v;
	int sosuu = 0;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &j);
		d = 0;

		for (v = 2; v <= 20; v++){
			if ((j % v) == 0) {
				if (j != 1)
					d++;
			}
		}

		if( (j >= 0 && j <= 7) ||(j ==11)||(j==13)||(j==17)||(j==19)) {
			if (d == 1) {
				sosuu++;
			}
		}
		else {
			if (d == 0) {
				sosuu++;
			}
			}
		}


	printf("%d\n", sosuu);
	return 0;
}
