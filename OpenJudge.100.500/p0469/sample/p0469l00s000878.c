#include <stdio.h>
int main()
{
	int a, b, c,d;
	scanf("%d", &a);
	scanf("%d%d", &b, &c);
	d = b / a;
	d++;
	if(a==1)
		printf("OK");
	else
	{
		if (d * a <= c)
			printf("OK");
		else printf("NG");
	}
	return 0;
}
