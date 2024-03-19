#include <stdio.h>

int main(void) {
	int n, i;
	int a[100];
	
	//数列の長さを入力する
	scanf("%d", &n);
	//数列の長さぶん数値を入力する
	for(i = 0; i < n; i++) {
	    scanf("%d", &a[i]);
	}
	//逆順にして出力する
	for(i = n - 1; i > 0; i--) {
	    printf("%d ", a[i]);
	}
	printf("%d\n", a[i]);
	return 0;
}

