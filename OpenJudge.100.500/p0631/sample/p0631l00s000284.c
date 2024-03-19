#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x,y,z,a=0,b,c;
	scanf("%d %d %d",&x,&y,&z);
	if (z-x <= y && z-x >= 0) printf("YES");
	else printf("NO");
	return 0;
}
