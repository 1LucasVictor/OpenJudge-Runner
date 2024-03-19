#include<stdio.h>
int main(void)
{
	int n,b[52],i,j;
	char a[52];
	scanf("%d", &n);
	for(i=0; i<n; i++)
	scanf("%s %d", &a[i], &b[i]);
	for(i=1; i<14; i++)
	{
		for(j=0; j<n; j++)
		{
			if(a[j]=='S'&&i==b[j])
			break;
			if(j==n-1)
			printf("S %d\n", i);
		}
	}
	for(i=1; i<14; i++)
	{
		for(j=0; j<n; j++)
		{
			if(a[j]=='H'&&i==b[j])
			break;
			if(j==n-1)
			printf("H %d\n", i);
		}
	}
	for(i=1; i<14; i++)
	{
		for(j=0; j<n; j++)
		{
			if(a[j]=='C'&&i==b[j])
			break;
			if(j==n-1)
			printf("C %d\n", i);
		}
	}
	for(i=1; i<14; i++)
	{
		for(j=0; j<n; j++)
		{
			if(a[j]=='D'&&i==b[j])
			break;
			if(j==n-1)
			printf("D %d\n", i);
		}
	}
	
	return 0;
}
