#include<stdio.h>
int main()
{
	int A,B,C,x=1,kaunt;
	while(scanf("%d %d",&A,&B)!=EOF)
	{
		kaunt=1;
		C=A+B;
		while(1)
		{
			C=C/10;
			if(C!=0)
				kaunt++;
			else
				break;
		}
		printf("%d\n",kaunt);
	}
	return 0;
}