#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

#define _CRT_SECURE_NO_WARNINGS
#define TLong long long
#define TBMod 1000000007

int main(int argc, char const *argv[])
{	
	int a,b,t;
	scanf("%d%d%d",&a,&b,&t);
	printf("%d",b * ((int)t / a));
	return 0;
}
