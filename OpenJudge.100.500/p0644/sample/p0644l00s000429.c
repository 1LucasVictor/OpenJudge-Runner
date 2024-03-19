#include <stdio.h>

int main(void)
{
	char data[4];
	scanf("%s",data);
	printf("%d",(int)((data[0]-'0')+(data[1]-'0')+(data[2]-'0')));
	return 0;
}