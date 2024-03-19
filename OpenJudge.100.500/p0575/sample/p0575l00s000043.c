/*
	submission # - User: herp_sy
	https://atcoder.jp/contests/
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

#define _CRT_SECURE_NO_WARNINGS

int main(int argc, char const *argv[])
{
	int x,a;
	int c;
	scanf("%d%d",&x,&a);
	c = (x < a) ? 0 : 10;
	printf("%d\n", c);
	return 0;
}
