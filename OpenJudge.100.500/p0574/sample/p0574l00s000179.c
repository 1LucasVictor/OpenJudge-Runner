#include <stdio.h>
#include <string.h>
int main()
{
	int m=0;
	char a[4];
	scanf("%s",a);
	for(int i=0;i<3;i++)
	{
		if(a[i]==a[i+1])
		{
			m++;
			break;
		}
	}
	if(m==0)
		printf("Good\n");
	else
		printf("Bad\n");
	return 0;

	
}