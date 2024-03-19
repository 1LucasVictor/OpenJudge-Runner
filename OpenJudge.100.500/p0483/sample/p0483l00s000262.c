#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	scanf("%d", &n);
	int m = n / 10;
	int l = n / 100;
	
	if(n - 10 * m == 7) printf("Yes");
	else if(l == 7) printf("Yes");
	else if(10 * m - l * 100 == 70) printf("Yes");
	else printf("No");
}