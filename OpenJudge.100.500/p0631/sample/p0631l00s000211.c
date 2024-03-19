#include <stdio.h>

int main()
{
	int a,b,x,y;
	y = 0;
	scanf("%d%d%d",&a,&b,&x);
	if (x >= a && x <= a + b) y = 1;
    if (y) printf("YES\n");
    else printf("NO\n");
    return 0;
}