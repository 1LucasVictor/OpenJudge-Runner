#include<stdio.h>
int main() {
	int i[1000000], j[1000000], k,m,n,x;
	scanf("%d", &k);
	for (m = 0;m < k;m++) {
		scanf("%d", &i[m]);
	}

	x = 0;

	for (n = 0;n < k;n++) {
		for (m = n+1;m < k;m++) {
			if (i[n] == i[m]) {
				x = 1;
			}
		}
	}
	if (x == 1) {
		printf("NO");
	}
	else {
		printf("YES");
	}
	return 0;
}