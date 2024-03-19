#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int flag = 0;
	while(n)
	{
		if(n%10==7)
		{
			flag = 1;
			break;
		}
		n/=10;
	}
if(flag==1)
	printf("Yes");
else
	printf("No");
	return 0;
}
