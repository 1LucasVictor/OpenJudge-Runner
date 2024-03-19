#include <stdio.h>
#include <string.h>

int main()
{
	char str[21];
	int i, leng;

	scanf("%s", str);
	printf("\n");
	leng=strlen(str);
	for( i=leng-1; i>=0; i-- ){
		printf("%c", str[i]);
	}
	return 0;
}