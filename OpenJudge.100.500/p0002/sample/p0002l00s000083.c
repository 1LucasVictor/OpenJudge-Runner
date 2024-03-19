#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	while (n--)
	{
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		if (c > a&&c > b&&c*c == a*a + b*b)
			printf("YES\n");
		else if (b > a&&b > c&&b*b == a*a + c*c)
			printf("YES\n");
		else if (a > c&&a > b&&a*a == c*c + b*b)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}