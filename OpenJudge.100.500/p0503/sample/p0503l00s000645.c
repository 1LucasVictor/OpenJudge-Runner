#include<stdio.h>

int main()
{
   int A, i, n, count, j;
   scanf("%d", &n);
   int arr[n];


   for(i = 0; i < n; ++i)
   {
		scanf("%d", &arr[i]);
   }

	for(i = 0; i < n; ++i)
	{
		count = 0;
		for(j = 0; j< n; ++j)
		{
			if(arr[i] == arr[j] && i != j)
			{
				printf("NO\n");
				return 0;
			}

			else
			{
			++count;
			}
		}
	}

	if(count == n)
	{
		printf("YES\n");
	}

}
