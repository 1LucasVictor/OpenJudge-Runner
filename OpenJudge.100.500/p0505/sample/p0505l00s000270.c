#include <stdio.h>
int main()
{
	int h, n;
	scanf("%d %d", &h, &n);
	int i;
	int arr[10001];
	int sum = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	if (h - sum > 0)
		printf("No\n");
	else
		printf("Yes\n");
	return 0;
}