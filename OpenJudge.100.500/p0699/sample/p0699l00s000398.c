#include<stdio.h>
int main(void)
{
	int a, b, c;
	int i , j;
	i = 0;
	j = 0;
	scanf("%d %d %d", &a, &b, &c);
	if (a == 5) i++;
	if (b == 5) i++;
    if (c == 5) i++;
    if (a == 7 || b == 7 || c == 7) j++;

	if (i == 2 && j == 1) printf("YES\n");
	else printf("NO\n");
	return 0;
}