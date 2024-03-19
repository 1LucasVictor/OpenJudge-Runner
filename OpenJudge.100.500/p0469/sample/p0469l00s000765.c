#include<stdio.h>
int main()
{
	int tc;
	scanf("%d",&tc);
	int A,B;
	scanf("%d %d",&A,&B);
	int flag = 1;
	for(int i = A;i<=B;i++)
	{
		if(i % tc == 0)
		{
			flag = 0;
			break;
		}
	}
	(flag) ? printf("NG\n") : printf("OK\n");
}