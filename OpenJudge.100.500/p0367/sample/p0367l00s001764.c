#include <stdio.h>

int main (void)
{
	int x , a , b , c , total = 0;
	scanf("%d %d %d" , &a , &b ,&c);
	for(x = a; x <= b ; x++)
	{
		if(c % x == 0)
		{
			total++;
		} 
	}
	printf("%d\n" , total);
	return 0;
}
