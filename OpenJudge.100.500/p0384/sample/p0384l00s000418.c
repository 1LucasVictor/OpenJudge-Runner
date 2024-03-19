#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char a[1200],*str;

	scanf("%[^\n]",a);
	str = a;
	while(*str != '\0'){
		if(isupper(*str))
			printf("%c",tolower(*str));
		else
			printf("%c",toupper(*str));
		str++;
	}
	printf("\n");
	return 0;
}