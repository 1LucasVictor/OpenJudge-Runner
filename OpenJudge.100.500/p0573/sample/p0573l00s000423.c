#include "stdio.h"

int main()
{
	char c[5];
	scanf("%s", &c);
	if ((c[0] == c[1] && c[2] == c[3]) || (c[0] == c[2] && c[1] == c[3]) || (c[0] == c[3] && c[1] == c[2]))printf("Yes");
	else printf("No");
	
	return 0;
}
