#include <stdio.h>

int	main(void)
{
	int	x;
    
    if (scanf("%d", &x) == EOF)
    	return (-1);
    if (30 <= x)
    	printf("Yes\n");
    else
    	printf("No");
    return (0);
}