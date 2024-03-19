#include<stdio.h>
main()
{
	int a,b,k,i,t=0;
	scanf("%d %d %d",&k,&a,&b);
	for(i=a;i<=b;i++)
	{
		if(i%k==0) 
		{
			t++;
			printf("OK");
			break;
		}
	}
	if(t==0) printf("NG");
}