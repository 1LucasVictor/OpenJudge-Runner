#include <stdio.h>
#include <string.h>
#define lop(i, n) for(i=0; i<n; i++)

int main()
{
	int a, b;
	
	scanf("%d %d", &a, &b);
	
	printf("%d", (a>9 || b>9)?(-1):(a*b));
	
return 0;
}