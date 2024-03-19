#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

int main(int argc, char const *argv[])
{
	int r = 0,b = 0;
	char str[100000];
	scanf("%s",str);
	for (int i = 0; i < strlen(str); ++i)
	{
		if(str[i] == '0')	++r;
		else ++b;
	}
	printf("%d\n", r < b ? 2 * r : 2 * b);
	return 0;
}