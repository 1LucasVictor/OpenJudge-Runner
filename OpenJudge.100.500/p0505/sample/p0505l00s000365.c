#include<stdio.h>
#include<math.h>

int main()
{
	int h,n;
	int	num;
	scanf("%d%d",&h,&n);
	int i;
	int total=0;
	for (i=1;i<=n;i++)
	{
		scanf("%d",&num);
		total+=num;
	}
	if (total>=h)	printf("Yes");
	else printf("No");
	return 0;
} 
 