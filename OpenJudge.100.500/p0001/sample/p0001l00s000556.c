#include<stdio.h>
int main(void)
 {
	int a=0;
	int b=0;
	int wa=0;
	int i=0;
	int keta=1;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		wa=a+b;
		for (i=0;i<1;)
		{
			if (wa/10==0)
			{
				i=1;
			}
			else
			{
				wa/=10;
				keta++;
			}
		}
		printf("%d\n",keta);
		keta=1;
	}
	return 0;
}