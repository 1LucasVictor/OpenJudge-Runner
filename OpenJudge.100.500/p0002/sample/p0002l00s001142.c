#include <stdio.h>

int main(void)
{
	int a, b, c, i, n;
	scanf("%d", &n);
	
	for(i=0; i<n; i++)
	{
		scanf("%d %d %d", &a, &b, &c);
		a*=a;
		b*=b;
		c*=c;
		
		if(a+b==c || b+c==a || a+c==b)
		{
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	
	return 0;
}