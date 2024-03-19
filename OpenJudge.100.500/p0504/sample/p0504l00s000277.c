#include<stdio.h>
int main()
{
	int H,A;
	scanf("%d %d",&H,&A);
	int count = 0;
	while(H > 0)
	{
		H -= A;
		count++;
	}
	printf("%d\n",count);
	return 0;
}