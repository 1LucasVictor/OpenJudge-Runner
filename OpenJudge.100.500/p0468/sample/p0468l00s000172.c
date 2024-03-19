#include <stdio.h>
#include <string.h>

int main()
{
	char a[1000];
	char b[]="ABC";

	scanf("%s", a);

	if (strcmp(a,b)==0)
		printf("ARC");
	else 
		printf("ABC");
	return 0;
}