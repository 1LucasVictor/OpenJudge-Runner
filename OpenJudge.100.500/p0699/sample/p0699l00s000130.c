#include <stdio.h>

int main(void)
{
	int a, b, c;
	int i, count_1 = 0, count_2 = 0;
	int n[3];
	
	scanf("%d%d%d", &a, &b, &c);
	if(a + b + c == 17) {
		n[0] = a;
		n[1] = b;
		n[2] = c;
		for( i = 0; i < 3; i++) {
			if(n[i] % 7 == 0) {
				count_1++;
			}
			if(n[i] % 5 == 0) {
				count_2++;
			}
		}
		if(count_1 == 1 && count_2 == 2) {
			printf("YES");
		}
		else {
			printf("NO");
		}
	}
	else {
		printf("NO");
	}
	return 0;
}