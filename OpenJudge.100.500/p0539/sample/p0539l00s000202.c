#include<stdio.h>
#include<string.h>
#include<math.h>

int main(void) {
	int n,m,i,a=0;
	char s[100];

	scanf("%d", &n);
	
	for (i = 1; i <= 9; i++) {
		if (((n % i) == 0) && (n / i >= 1) && (n / i <= 9)) {
			printf("Yes");
			return  1;
		}
	}
	printf("No");
	return 0;
}