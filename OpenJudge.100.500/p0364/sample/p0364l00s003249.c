#include<stdio.h>

int main(void)
{

	int W, H, x, y, r;

	scanf("%d %d %d %d %d", &W, &H, &x, &y, &r);

	if(x-r<0 || x+r>W)
	{
		printf("No\n");
	}
	else	
        {
		printf("Yes\n");
	}
	return 0;
}
