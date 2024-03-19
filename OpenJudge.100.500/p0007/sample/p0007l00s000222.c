#include <stdio.h>
#include <string.h>
int main(void)
{
	int n, a,b,c,d;
	int cnt;

	while( scanf("%d", &n) != EOF )
	{
		cnt=0;
		for(a=0; a<=9; a++)
		for(b=0; b<=9; b++)
		for(c=0; c<=9; c++)
		for(d=0; d<=9; d++)
		{
			if(a+b+c+d == n)
			{
				//printf("%d %d %d %d\n", a, b, c, d);
				cnt++;
			}
		}
		printf("%d\n", cnt);
	}
    return 0;
}