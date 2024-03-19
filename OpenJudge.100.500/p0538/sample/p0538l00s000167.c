#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    int a, b;
	
    scanf("%d%d", &a, &b);
	if (a<=9&&b<=9) {
		printf("%d", a * b);
	}
	else {
		printf("-1");
	}
}
