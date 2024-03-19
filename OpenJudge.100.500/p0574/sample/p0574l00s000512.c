/*
	submission # - User: herp_sy
	https://atcoder.jp/contests/
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

int main(int argc, char const *argv[])
{
	char s[7];
	scanf("%s",s);
	for (int i = 1; i < 4; ++i)
	{
		if(s[i - 1] == s[i]){
			puts("Bad");
			return 0;
		}
	}
	puts("Good");
	return 0;
}
