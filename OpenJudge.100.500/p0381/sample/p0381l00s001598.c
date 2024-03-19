#include<stdio.h>

int main(void){
	int n, x, i, j;
	while (1) {
		scanf("%d %d", &n, &x);
		if(n == 0 && x == 0) break;

		int cnt = 0;
		for (i = 1; i < x / 3 ; i++) {
			for (j = n; j > (x - i)/ 2 ; j--) {
				if(i < x-i-j && x -i-j < j) cnt++;
			}
		}
		printf("%d\n", cnt);
	}

    return 0;
}
