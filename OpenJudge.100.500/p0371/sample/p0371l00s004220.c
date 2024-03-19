#include <stdio.h>

int main()
{
	int n;
	long long int arr[10000], min, max, sum;
       scanf("%d",&n);
      for(int i=0; i<n; i++)
    {
        scanf("%lld", &arr[i]);
    }

  min = arr[0];
  max = arr[0];
  sum = arr[0];
  
  
   for(int i=1; i<n; i++)
    {
        /* If current element is greater than max */
        if(arr[i] > max)
        {
            max = arr[i];
        }

        /* If current element is smaller than min */
        if(arr[i] < min)
        {
            min = arr[i];
        }
        sum += arr[i];
    }
 	printf("%lld %lld %lld\n", min, max, sum);
	
	return 0;
}

