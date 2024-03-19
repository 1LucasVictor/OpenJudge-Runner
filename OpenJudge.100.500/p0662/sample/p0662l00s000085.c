#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d); 
	if(a>=d||b<=c)
	{
	printf("0\n");
	goto exit;
    }
	if(a<=c)
	{
		if(c<b<=d)
		printf("%d\n",b-c);
		if(b>d)
		printf("%d\n",d-c);
	}
	else
	{
		if(b<=d)
		printf("%d\n",b-a);
		if(b>d)
		printf("%d\n",d-a);
	}
	exit:
	return 0;
}