#include <stdio.h>
int main() {
	int n, i, temp, ans;
	int data[5000];
	while (1) {
		scanf(" %d", &n);
		if (n == 0)
			break;
		temp = -100000;
		for (i = 0; i < n; i++) {
			scanf(" %d", &data[i]);
			if (data[i] > temp)
				temp = data[i];
		}
		if (temp <= 0) {
			printf("%d\n", temp);
			continue;
		}
		temp = ans = 0;
		for (i = 0; i < n; i++) {
			temp = (data[i] + temp > 0) ? data[i] + temp : 0;
			ans = (temp > ans) ? temp : ans;
		}
		printf("%d\n", ans);
	}
	return 0;
}