#include<stdio.h>
int main()
{
	int a,b,t1,t4,c,d;
	while(scanf("%d %d %d %d",&a,&b,&c,&d)!=EOF)
	{
		if(b>c&&a<d)
		{
		t1=(a>c?a:c);
			t4=(b<d?b:d);
		printf("%d\n",t4-t1);
		}
		else{
			printf("0\n");
		}
	}
 } 