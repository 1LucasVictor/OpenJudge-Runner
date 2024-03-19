#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <math.h>


//using ll = long long;
int ASC( void *a,  void *b) {
	return strcmp(*(const char **)a, *(const char **)b);//降順
}
int GCD(int a, int b) {
	if (b == 0) return a;
	else return GCD(b, a % b);
}

int main(void)
{
	char s[4];
	scanf("%s",s);
	if (s[1] == 'B')
		printf("ARC");
	else
		printf("ABC");
	return 0;
}