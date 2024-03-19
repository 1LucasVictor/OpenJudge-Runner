#include<stdio.h>
int main() {
	int a[1000], b[1000],an,bn,key,cnt=0,i,j;
	scanf("%d", &an);
	for ( i = 0; i <an; i++)
	{
		scanf("%d", &a[i]);
	}
	scanf("%d", &bn);
	for (i = 0; i < bn; i++)
	{
		scanf("%d", &b[i]);
	}

	for ( i = 0; i < bn; i++)
	{
		for ( j = 0; j < an; j++)
		{
			if (b[i] == a[j])
			{
				cnt++;
				
			}
		}
	}
	
	printf("%d", cnt);
	printf("\n");


	return 0;
}
