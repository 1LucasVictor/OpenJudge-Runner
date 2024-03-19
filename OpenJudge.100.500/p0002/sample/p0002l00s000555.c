#include <stdio.h>
int main(void)
{
	int a, b, c, num;
	int i, temp;

	scanf("%d", &num);
	for (i = 0; i < num; i++) {

		scanf("%d %d %d", &a, &b, &c);

		if (a < b) {
			temp = a;
			a = b;
			b = temp;
		}

		if (a < c) {
			temp = a;
			a = c;
			c = temp;
		}


		if (a*a == b*b + c*c)
			printf("YES\n");
		else
			printf("NO\n");
	}

	return 0;
}