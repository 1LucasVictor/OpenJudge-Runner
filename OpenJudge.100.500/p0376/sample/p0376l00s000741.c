#include <stdio.h>

int main(void) {
	int arr[100];
	int n, i, j, temp;
	scanf("%d", &n);
	for (i=1; i<=n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i=1; i<n; i++)
	{
		for (j=i+1; j<=n; j++)
		{
			if (arr[i]<=arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for (i=1; i<n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("%d\n", arr[n]);
	return 0;
}