#include<stdio.h>
int main () {
	int n , x , count = 0;
	int i , s , j;
	while(1) {
		scanf("%d %d" , &n , &x);
		if (n == 0 && x == 0) break;
		count = 0;
		for(i = 1; i <= n; i++) {
			for(s = i + 1; s <= n; s++) {
				for(j = s + 1; j <= n; j++) {
					if (i + s + j == x) count++;
				}
			}
		}
		printf("%d\n" , count);
	}
}