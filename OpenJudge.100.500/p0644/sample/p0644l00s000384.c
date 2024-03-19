#include <stdio.h>


int main(void)
{
	char s1, s2, s3;
	scanf("%c%c%c", &s1,&s2,&s3);
	printf("%d", s1 + s2 + s3-'0'*3);
	
	return 0;
}
