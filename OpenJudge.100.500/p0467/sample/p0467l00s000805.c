#include <stdio.h>

int main(){
	int a,b,c,k;
	int i, j = 0,  m, sum = 0;;
	int box[50];
	scanf("%d%d%d%d", &a, &b, &c, &k);
	for (i = 0; i < 50; i++)
		box[i] = 0;
	while (a > 0) {
		box[j] = 1;
		j++;
		a--;
	}
	while (b > 0) {
		box[j] = 0;
		j++;
		b--;
	}
	while (c > 0) {
		box[j] = -1;
		j++;
		c--;
	}
	for (m = 0; m < k; m++)
		sum += box[m];
	printf("%d", sum);
	return 0;
}