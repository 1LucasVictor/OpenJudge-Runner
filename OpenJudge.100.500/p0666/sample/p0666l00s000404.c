# include<stdio.h>

int main()
{
	int x,a,b;
	while(scanf("%d %d %d",&x,&a,&b)!=EOF)
	{
		if(b<=a)
		{
			printf("delicious\n");
		}
		else
		{
			if(b-a<=x)
				printf("safe\n");
			else
				printf("dangerous\n");
		}
	}
	return 0;
}