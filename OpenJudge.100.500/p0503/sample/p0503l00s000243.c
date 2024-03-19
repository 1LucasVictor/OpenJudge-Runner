#include <stdio.h>
void swap(int *first, int *second)
{
    int temp = *first;
    *first = *second;
    *second = temp;
}
void quick_sort(int *arr, int l, int r)
{
    if(l >= r)
        return ;
    int x = arr[l], i = l - 1, j = r + 1;
    while(i < j)
    {
        do i++; while(arr[i] < x);
        do j--; while(arr[j] > x);
        if(i < j)
            swap(&arr[i], &arr[j]);
    }
    quick_sort(arr, l, j);
    quick_sort(arr, j + 1, r);
}
int main()
{
	int n;
	scanf("%d",&n);
	int arr[200005];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	quick_sort(arr,0,n-1);
	int j;
	for(j=0;j<n-1;j++)
	{
		if(arr[j]==arr[j+1])
		{
			printf("NO\n");
			break;
		}
	}
	if(j==n-1)
	printf("YES\n");
	return 0;
}