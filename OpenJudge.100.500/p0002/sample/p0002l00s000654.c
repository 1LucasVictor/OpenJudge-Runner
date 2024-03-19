#include <stdio.h>

int main(void)
{
	int i, n;
	int a, b, c;
	scanf("%d", &n);

	for(i=0; i<n; i++)
	{
		scanf("%d %d %d", &a, &b, &c);
		     if(a*a + b*b == c*c)puts("YES");
		else if(a*a + c*c == b*b)puts("YES");
		else if(b*b + c*c == a*a)puts("YES");
		else puts("NO");
	}
	return 0;
}