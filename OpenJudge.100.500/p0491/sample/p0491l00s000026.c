#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n, k, i, p;
	scanf("%d %d", &n, &k);
	
	p = n%k;
	
	if(p <= k - p) printf("%d", p);
	else printf("%d", k - p);
	
}