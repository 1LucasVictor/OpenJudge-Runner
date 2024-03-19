#include <stdio.h>

int func2(int n) {
	int count = 0;
	int a, b, c;

	/* 4つの数の和では求まらないパターンの排除 */
	if(n < 37) {
		for(a = 0; a < 10; a++) {
			if(n - a < 0) break;/* この時点までに解が存在しないと分かったとき */

			for(b = 0; b < 10; b++) {
				if(n - (a + b)  < 0) break;/* この時点までに解が存在しないと分かったとき */

				for(c = 0; c < 10; c++) {
					/* dの値次第では解が見つかる場合 */
					if(n - (a + b + c) < 10 && n - (a + b + c) >= 0) {
						count++;
					}
				}
			}
		}
	}
	return count;
}

int main() {
	int n;

	while(scanf("%d", &n) != EOF) {
		printf("%d\n", func2(n));
	}

	return 0;
}