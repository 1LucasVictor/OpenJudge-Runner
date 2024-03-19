#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,a[6],t=0;
	for(i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(abs(a[i]-a[j])>=a[5])
				t=1;
		}
	}
	if(t==1)
		printf(":(\n");
	else
		printf("Yay!\n");
	return 0;
}