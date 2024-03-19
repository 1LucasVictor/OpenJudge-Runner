#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define lop(i, n) for(i=0; i<=n; i++)

int main()
{
	int a, b, k;
	
	scanf("%d %d", &a, &b);
	
	k=(a+b)/2;
	
	if(a%2!=b%2){ printf("IMPOSSIBLE"); }
	else { printf("%d", k); }
	
	return 0;
}