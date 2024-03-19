#include <stdio.h>

int main(void){
	int L, R, i, j, min;
	scanf("%d %d", &L, &R);
	min = (L*L + L) % 2019;
	for (i = L; i <= R; i++){
		for (j = L+1; j <= R; j++){
			if (j <= i) continue;
			if ((i * j) % 2019 < min) min = (i * j) % 2019;
		}
	}
	printf("%d\n", min);
	return 0;
}
