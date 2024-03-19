#include <stdio.h>

int main(void) {
	int n, m, i, j, c, num;
	int a[1000][1000], b[1000];
	
	scanf("%d%d", &n, &m);
	
	//aの配列に値を入力する
	for(i = 0; i < n; i++) {
	    for(j = 0; j < m; j++) {
	        scanf("%d", &num);
	        a[i][j] = num;
	    }
	}
	
	//bの配列に値を入力する
	for(i = 0; i < m; i++) {
	    scanf("%d", &num);
	    b[i] = num;
	}
	
	//計算して出力する
	for(i = 0; i < n; i++) {
	    c = 0;
		for(j = 0; j < m; j++) {
			c += a[i][j] * b[j];
		}
		printf("%d\n", c);
	}
	return 0;
}

