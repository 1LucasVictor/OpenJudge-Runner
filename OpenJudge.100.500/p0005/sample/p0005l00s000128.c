#include <stdio.h>

int main(void)
{
	char str[20];
	int  i = 0;
	
	scanf("%s", str);
	while (str[i++]);
	i -= 2;
	while (i >= 0){
		putchar(str[i--]);
	}
	puts("\0");
	
	return (0);
}