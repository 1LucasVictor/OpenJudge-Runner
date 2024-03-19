#include <stdio.h>

int main(void){
	int a[200000];
	int n;
	int flag;
	int k, k1, k2;

	scanf("%d", &n);
	for (k = 0; k < n; k++) {
		scanf("%d", &a[k]);
	}

	flag = 0;
	for (k1 = 0; k1 < n-1; k1++) {
		for(k2 = k1+1; k2 < n; k2++){
			if (a[k1]==a[k2]) { flag = 1; break; }
		}
	}

	if (flag == 0) {
		puts("YES");
	} else {
		puts("NO");
	}

	return 0;
}
