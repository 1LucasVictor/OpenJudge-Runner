#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a[100000][2], i, I, b[100000];
	char n;
	for(i = 0 ;  ; i++)
	{
		scanf("%d %c %d", &a[i][0], &n, &a[i][1]);
		if(n == '+')
		{
			b[i] = a[i][0] + a[i][1];
			continue;
		}
		else if(n == '-')
		{
			b[i] = a[i][0] - a[i][1];
			continue;
		}
		else if(n == '*')
		{
			b[i] = a[i][0] * a[i][1];
			continue;
		}
		else if(n == '/')
		{
			b[i] = a[i][0] / a[i][1];
			continue;
		}
		else if(n == '?')
		{
			for(I = 0 ; I < i ; I++)
			{
				printf("%d\n", b[I]);
			}
			exit(0);
		}
	}
	
	return 0;
}
