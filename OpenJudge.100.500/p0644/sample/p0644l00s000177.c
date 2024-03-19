#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	char s1,s2,s3;

	scanf("%c",&s1);
	scanf("%c",&s2);
	scanf("%c",&s3);



	int x = 0;

	if (s1 == '1') {
		x++;
	}

	if (s2 == '1') {
		x++;
	}

	if (s3 == '1') {
		x++;
	}

	printf("%d\n",x);

}
