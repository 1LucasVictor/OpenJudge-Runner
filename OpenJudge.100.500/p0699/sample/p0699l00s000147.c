#include <stdio.h>

int arr[11];

int main(void) 
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	arr[a]++; arr[b]++; arr[c]++;
	if (arr[5] == 2 && arr[7] == 1) printf("YES\n");
	else printf("NO\n");

	return 0;
}