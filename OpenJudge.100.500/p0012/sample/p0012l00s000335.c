#include<stdio.h>

int main()
{
	int i=0,j=0,n;/*待数、スイッチ*/
	int train[100],es[100];/*待ち電車、出発した電車*/

	while(scanf("%d",&n) != EOF)
	{
		if((i==0 && n==0) || (n<0 || n>10))
			continue;
		else if(n==0)
		{
			i--;
			es[j]=train[i];
			j++;
		}
		else
		{
			train[i]=n;/*納車*/
			i++;
		}
	}
	
	for(i=0;i<j;i++)
	{
		printf("%d\n",es[i]);
	}

	return 0;
}