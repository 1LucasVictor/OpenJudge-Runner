#include<stdio.h>
int main()
{
	int a,b,i,gcd,lcm,max;
	while((scanf("%d %d",&a,&b) != EOF))
	{
		max = a; if(b>a)max=b;
		for(i=max;i>0;i--)
		{
			if(b%i==0 && a%i==0){gcd = i;break;}
		}
		lcm = a/i*b;
		printf("%d %d\n",gcd,lcm);
	}
	
	return 0;
}