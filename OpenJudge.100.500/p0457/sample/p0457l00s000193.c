#include <stdio.h>
#include <stdlib.h>

void swap(long int *a, long int *b);
void Sort(long int arr[], int n);

int main()
{
	long int i, j, n, m, k, sum = 0;
	int count = 0;
	scanf("%ld %ld %ld", &n,&m,&k);
	
	long int arr1[n], arr2[m], arr3[n+m];
	
	for (int i = 0; i < n; i++)
	{
		scanf("%ld", &arr1[i]);
	}
	for (int i = 0; i < m; i++)
	{
		scanf("%ld", &arr2[i]);
	}
	
	for (i = 0,j = 0; i < n+m; i++)
	{
		if (i < n)
		{
			arr3[i] = arr1[i];
		}
		else
		{
			arr3[i] = arr2[j];
			j++;
		}
	}
	
	Sort(arr3, m+n);
	sum = arr3[0];
	for (i = 0; i < m+n; i++)
	{
		if (sum <= k)
		{
			count++;
		}
		else 
		{
			break;
		}
		sum += arr3[i];
	}
	printf("%d", count);
	return 0;
}

void Sort(long int arr[], int n)
{
	long int i = 0;
	
	while ( i < n - 1)
	{
		if (arr[i] <= arr[i+1])
		{
			i++;
		}
		else
		{
			if (i == 0)
			{
				swap(&arr[i], &arr[i+1]);
			}
			else
			{
				swap(&arr[i], &arr[i+1]);
				i--;
			}
		}
	}	
}

void swap(long int *a, long int *b)
{
	long int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}