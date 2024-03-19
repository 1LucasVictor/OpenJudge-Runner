#include<stdio.h>
int main(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	int ans = a;
	int cnt = 1;
	while (1) {
		if (ans >= b) {
			break;
		}
		else {
			ans--;
			ans += a;
			cnt++;
			if (ans >= b) {
				break;
			}
			
		
		}
	}
	printf("%d\n", cnt);

	return 0;
}