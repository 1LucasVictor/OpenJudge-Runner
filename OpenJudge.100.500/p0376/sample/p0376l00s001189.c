#include<stdio.h>
int main(void)
{
	int i,j,q,x,box[1000],jadge;
	scanf("%d",&i);
	for (j = 0; j < i; j++)
	{
		scanf("%d", &box[j]);
	}

	for (j = 0; j < i; j++)
	{
		x=0;
		for (q = j+1; q < i; q++)
		{
			jadge = box[x];
			box[x] = box[x+1];
			box[x+1] = jadge;
			x++;
		}
	}
	for (j = 0; j < i-1; j++)
	{
		printf("%d ",box[j]);
	}
	printf("%d\n",box[i-1]);
	return 0;
}
