#include<stdio.h>
int main()
{
	int N,i=1,q=3,reminder;
	scanf("%d",&N);
	for(i=1;i<=q;i++)
		{
			reminder=N%10;
			N=N/10;
			if(reminder==7)
				{
					printf("Yes\n");
					break;
				}
		}
		
		if(reminder!=7)
			{
				printf("No\n");
			}
	return 0;
}