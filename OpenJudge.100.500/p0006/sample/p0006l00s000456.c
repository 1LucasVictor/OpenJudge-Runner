#include<stdio.h>
int main()
{
	int n,x,kane=100000;
	double kane2;
	scanf("%d",&n);
	for(x=0; x<n; x++)
	{
		kane=kane+kane*0.05;
		kane+=999;
		kane2=kane*0.001;
		kane=kane2;
		kane*=1000;
	}
	printf("%d\n",kane);
	return 0;
}