#include <stdio.h>

int	main(void)
{
  	int	n;
  	int a[200002];
  	int	i;
  	int	t[200002];
 
  	scanf("%d\n", &n);
  	for(i=1; i<=n; i++)
    {
      	t[i] = 0;
    }
  	a[0] = 0;
  	for(i=2; i<=n; i++)
    {
      	scanf("%d", &a[i]);
      	t[a[i]]++;
    }
  
 	for(i=1; i<=n; i++)
    {
      	printf("%d\n", t[i]);
    }
  	return (0);
}