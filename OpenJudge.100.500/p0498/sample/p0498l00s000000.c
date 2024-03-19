#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n, q;

    scanf("%d", &n);

    if(n%2 == 0)
    {
    	q = n/2;
    }
    else
    {
    	q = (n/2)+1;
    }

    printf("%d\n", q);
    
	return 0;
}