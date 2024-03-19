#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

#define _CRT_SECURE_NO_WARNINGS

int main(int argc, char const *argv[])
{
	int cnt = 0;
	char s[7];
	scanf("%s",s);
	for (int i = 0; i < 3; ++i)
	{
		if(s[i] == '1')	++cnt;
	}
	printf("%d\n", cnt);
	return 0;
}
