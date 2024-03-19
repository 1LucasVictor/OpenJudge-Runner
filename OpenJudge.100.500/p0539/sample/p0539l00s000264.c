#include <stdio.h>

int main() {
	int N;
	scanf("%d",&N);
	int flag = 0;
	for (int i = 1; i <= 9; i++) {
		double tmp = (double)N/(double)i;
		if (tmp == (int)tmp) {
			int val = tmp/10;
			if (val == 0) {
				printf("Yes\n");
				flag = 1;
				break;
			}
		}
	}
	if (flag == 0) printf("No\n");
	return 0;
}