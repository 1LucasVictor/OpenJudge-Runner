#include<stdio.h>
int main(void)
{
	int a,c,x,b,e=0;
	double d ;

	scanf("%d %d %d",&a,&b,&c);

	for(x=a;x<=b;x++)
	{
		d = c%x;
		
		if(d==0)
		{
			e++;
		}
		
	}

	printf("%d\n",e);
	
	return 0;
}