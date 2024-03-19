#include <stdio.h>

int main()
{
	int x, y, z;
	int i, n;
	
	scanf("%d", &n);

	for(i=0; i<n; i++)
	{
		scanf("%d%d%d", &x,&y,&z);

		if((x*x == (y*y+z*z)) || (y*y == (z*z+x*x)) || (z*z == (x*x+y*y)))
			printf("YES\n");
		else
			printf("NO\n");

	}

	return 0;
}