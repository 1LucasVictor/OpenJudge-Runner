#include <stdio.h>

int main()
{
	char x[1000];
	int i,a,sum=0;

	for(;;)
	{
	i=0; a=0; sum=0;
	scanf("%s",x);
	if(x[0]=='0') break;
//	printf("%s",x);	

	for(i=0; x[i]!='\0'; i++)
	{
			a = x[i]-'0';
			sum+=a;
	}

	printf("%d\n",sum);

	}
	

return 0;
}

