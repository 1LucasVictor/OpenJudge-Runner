#include <stdio.h>
#include <string.h>

int main(void) {
	char w[201];
	char k[201];
	char q[201];
	int m = 0;
	int n = 0;
	for (int i = 0; i < 201; i++) {
		w[i] = 0;
		k[i] = 0;
		q[i] = 0;
	}
	while (1) {
		scanf("%s", &w);
		if (strstr(w,"-")) {
			break;
		}
		int t = strlen(w);
		scanf("%d", &m);
		for (int i = 0; i < m; i++) {
			scanf("%d", &n);
			for (int p = 0; p < t; p++) {
				if (p < n) {
					k[p] = w[p];
				}
				else{
					q[p-n] = w[p];
				}
			}
			sprintf(w,"%s%s", q, k);
			for (int i = 0; i < 201; i++) {
				k[i] = 0;
				q[i] = 0;
			}
			
		}
		printf("%s\n", w);
	}
	return 0;
}
