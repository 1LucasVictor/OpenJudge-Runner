#include<stdio.h>

int main()
{
	int a, b, c, i=0;

	scanf("%d %d %d", &a, &b, &c);

	if (a + b + c == 17) {
		i++;
	}

	if (a == 5 || a == 7) {
		i++;
	}

	if (b == 5 || b == 7) {
		i++;
	}

	if (i == 3) {
		printf("YES\n");
	}
	else {
		printf("NO\n");
	}

	return 0;

}