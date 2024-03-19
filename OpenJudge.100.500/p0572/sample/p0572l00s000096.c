#include<stdio.h>
int main()
{
	int l,r,temp,final;
	temp = 0;
	scanf("%d %d",&l,&r);
	final = l*(l+1)%2019;
	for(int i = l;i<=r-1;i++)
		for(int j = l+1;j<=r;j++)
		{
			temp = i*j%2019;
			if(temp<=final)
				final = temp;
		}
		
		
	printf("%d\n",final);
	return 0;
 } 