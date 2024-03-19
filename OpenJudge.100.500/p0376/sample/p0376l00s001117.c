#include <stdio.h>
int main(void)
{
	int i,j[10000],k;
	scanf("%d",&i);
	for(k=0;k<i;k++)
	{
		scanf(" %d",&j[k]);
	}
	for(k=0;k<i;k++)
	{
	    if(k)
			printf(" ");
		printf("%d",j[i-k-1]);
		}
		printf("\n");
	return 0;
}
	