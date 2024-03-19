#include <stdio.h>
int main()
{
	long long int h, n;
	scanf("%lld %lld", &h, &n);
	long long int i;
	long long int arr[100001];
	long long int sum = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%lld", &arr[i]);
		sum += arr[i];
	}
	if (h - sum > 0)
		printf("No\n");
	else
		printf("Yes\n");
	return 0;
}