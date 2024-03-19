#include <stdio.h>
#include <stdlib.h>

int compare_ints(const void* a, const void* b)
{
    int arg1 = *(const int*)a;
    int arg2 = *(const int*)b;
 
    if (arg1 < arg2) return -1;
    if (arg1 > arg2) return 1;
    return 0;
}

int	main(void)
{
  	int	n;
  	int	*a;
  	int	num;
  	int	i;
  
  	num = scanf("%d", &n);
  	if (num != 1)
      	return (0);
  
  	a = (int *)malloc(sizeof(int) * n);
  	for (i = 0; i < n; i++)
    {
      	num = scanf("%d", &a[i]);
      	if (num != 1)
          	return (0);
    }
  
  	qsort(a, n, sizeof(int), compare_ints);
  
  	for (i = 0; i < n - 1; i++)
    {
          	if (a[i] == a[i + 1])
            {
              	printf("NO");
          		return (0);
            }
    }
  	printf("YES");
  	return (0);
}