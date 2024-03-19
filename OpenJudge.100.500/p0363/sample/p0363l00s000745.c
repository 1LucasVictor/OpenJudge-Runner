#include<stdio.h> 
#include<stdlib.h>

int main()
{
	int a, b, c;
	int max, min, total = 0;
	scanf("%d %d %d", &a, &b, &c);
	total = a + b + c;
	if(a >= b && b >= c)
    {
		max = a;
    }   
	else if(b >= c && b >= a)
    {
    	max = b;
	}	
	else if (c >= a && c >= b)
	{
		max = c;
	}
	if(a <= b && b <= c)
    {
		min = a;
    }   
	else if(b <= c && b <= a)
    {
    	min = b;
	}	
	else if (c <= a && c <= b)
	{
		min = c;
	}
	printf("%d %d %d\n", min, total - max - min, max);
	return 0;
}
