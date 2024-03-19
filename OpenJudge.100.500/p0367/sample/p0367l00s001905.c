#include<stdio.h>

int main(){

	int a, b, c,count=0,i;

	scanf("%d %d %d", &a, &b, &c);

	if (a<=b)
	{

		for ( i = a; i <= b; i++)
		{

			if (c%i==0)
			{
				count += 1;
			}

		}


	}

	printf("%d\n", count);


	return 0;
}