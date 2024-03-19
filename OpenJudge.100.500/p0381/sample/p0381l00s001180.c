#include <stdio.h>

int main (void)
{
	int n, x;
	int l, m, i;
	int s = 0;

	scanf("%d %d", &n, &x);
	for(l=1; l<=n; l++){
		for(m=l+1; m<=n; m++){
			for(i=m+1; i<=n; i++)
				if((l+m+i) == x)
				++s;

			
		}
	}
	printf("%d\n",s);

	return 0;

}