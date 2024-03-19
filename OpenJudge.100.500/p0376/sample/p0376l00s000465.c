#include <stdio.h>
 
int main() {
	
	int n, a[100];
	scanf("%d", &n);
	for(int i = 0; i < n; ++i) { //配列aをn個出力
		scanf("%d", &a[i]);
	}
	for(int i = n-1; i >= 0; --i) { //n個の出力された数字を逆順に出力
		printf("%d", a[i]);
		if(i != 0) {
			printf(" ");
		} else {
			printf("\n");
		}
	}
	return 0;
}
