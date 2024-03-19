#include<stdio.h>

int main(void)
{
	long int a,b,c,d;
	int i=2,j=0,k=0,l=0,o=0,jj=0;
	int u=1;

	while(scanf("%ld",&a)&&scanf("%ld",&b) != EOF)
	{
		while(a % 10 == 0 && a > 9)
		{
			a = a/10;
			k++;
			jj=1;
		}
		while(b % 10 == 0 && b > 9)
		{
			b=b/10;
			o++;
			jj=1;
		}
		c = a;
		d = b;
		while(i < c && i < d)
		{
			if(a%i == 0 && b%i == 0)
			{
				a = a/i;	b = b/i;
				u = u * i;
				i = 2;
			}
			i++;
		}
		if(k != 0 && o != 0)
		{
			printf("%d",u);
			if(o > k)
			{
				k = o;
			}
			for(i = 0;i < k;i++)
			{
				printf("0");
				if(i == k-1)
				{
					printf(" ");
				}
			}
		}
		else
		{
			printf("%d ",u);
		}
		
		j = u*a*b;
			
		if(jj == 1)
		{
			if(o > k)
			{
				k = o;
			}
			printf("%d",j);
			for(i = 0;i < k;i++)
			{
				printf("0");
				if(i == k - 1)
				{
					printf("\n");
				}
			}
		}
		else
		{
			printf("%d\n",j);
		}
		i = 1;
		k=0;o=0;jj=0;u=1;
	}

	return 0;
}