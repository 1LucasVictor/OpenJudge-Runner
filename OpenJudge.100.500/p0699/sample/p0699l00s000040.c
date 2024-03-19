#include<stdio.h>
int main()
{
	
	int a[5],i,count=0;
	for(i=0;i<3;i++)
	{
		scanf("%d",&a[i]);		
	}	

	for(i=0;i<3;i++)
	{
		if(i==0)
		{
			count++;
			if(a[i]<=5)continue;
			else break;
		
		}
		if(i==1)
		{
			count++;
			if(a[i]<=7)continue;
			else break;
		}
		if(i==2)
		{
			count++;
			if(a[i]<=5)continue;
			else break;
		}
	}
	if(count==3)
	{
		printf("YES");
	}
	else printf("NO");
		
		
	return 0;
}