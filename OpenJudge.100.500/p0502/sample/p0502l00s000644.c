#include  <stdio.h>
#include  <stdlib.h>
int main()
{
	int p;
	int a[101];
	scanf("%d",&p);
	int i = 0,flag = 1;
	for(i=0;i<p;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%2==0)
		{
			if(a[i]%3==0 ||a[i]%5==0)
			;
			else
				flag = 0;
		}
	}
	if(flag)
		printf("APPROVED");
	else
		printf("DENIED");
	return 0;
}