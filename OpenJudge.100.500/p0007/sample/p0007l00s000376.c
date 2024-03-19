#include <stdio.h>
int main(){
	int i, I, ii, II;
	int m=0;
	int n;
	int a[50]={};
	while(scanf("%d", &n)!=EOF)
	{
		for(i=0;i<10;i++)
		{
			for(I=0;I<10;I++)
			{
				for(ii=0;ii<10;ii++)
				{
					for(II=0;II<10;II++)
					{
						if(i+I+ii+II==n)
						{
							a[m]++;
						}
					}
				}
			}
		}
		m++;
	}
	for(i=0;i<m;i++)
	{
		printf("%d\n", a[i]);
	}
	return 0;
}