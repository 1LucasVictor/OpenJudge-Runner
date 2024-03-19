#include<stdio.h>
int main()
{
	char a[4];
	int i;
	scanf("%s",a);
	if(a[0]==a[1] || a[1]==a[2] || a[2]==a[3])
	{
		printf("Bad\n");
	}
	else
	{
		printf("Good\n");
	}
	return 0;
}
