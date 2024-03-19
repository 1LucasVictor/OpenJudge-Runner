#include<stdio.h>
int main()
{
	int i, n, a[101], flag=1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			if(a[i]%3==0||a[i]%5==0)
			flag=1;
			else
			{
				flag=0;
				break;
			}
			
		}
	}
	if(flag==1)
	printf("APPROVED");
	else
	printf("DENIED");
	

	return 0;
}
