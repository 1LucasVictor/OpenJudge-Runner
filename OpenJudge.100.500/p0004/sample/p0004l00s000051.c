#include<stdio.h>
#define DATA 100

int main(){
	int a[DATA], b[DATA];
	int i, j, k, tmp1, tmp2;
	int GCD[DATA], LCM[DATA];

	i = 0;
	while (scanf("%d %d", &a[i], &b[i]) != EOF)
		i++;

	for (j = 0; j < i; j++){
		if (a[j] < b[j]){
			for (k = a[j]; k >= 2; k--){
				if (a[j] % k == 0 && b[j] % k == 0){
					GCD[j] = k;
					break;
				}
				if (k == a[j])
					if (k % 2 == 0)
						k = k / 2;
					else
						k = k / 2 + 1;
			}
		}
		else{
			for (k = b[j]; k >= 2; k--){
				if (a[j] % k == 0 && b[j] % k == 0){
					GCD[j] = k;
					break;
				}
				if (k == b[j])
					if (k % 2 == 0)
						k = k / 2;
					else
						k = k / 2 + 1;
			}
		}

		tmp1 = a[j];
		tmp2 = b[j];
		while (a[j] < 2000000000 && b[j] < 2000000000){
			if (a[j] < b[j]){
				a[j] += tmp1;
			}
			else if (b[j] < a[j]){
				b[j] += tmp2;
			}
			if (a[j] == b[j]){
				LCM[j] = a[j];
				break;
			}
		}
		printf("%d %d\n", GCD[j], LCM[j]);
	}

	return 0;
}