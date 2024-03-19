#include <stdio.h>

int main()
{
	char a,b,c;
	scanf("%c%c%c",&a,&b,&c);
	getchar();
	a!=b || b!=c || a!=c ? printf("Yes"): printf("No");
	
	return 0;
}