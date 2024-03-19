#include<stdio.h>
int main()
{
	char a[100];
	scanf("%s",a);
	if(a[0]==a[1]||a[1]==a[2]||a[2]==a[3])
	{
		printf("Bad");
	}
	else
	{
		printf("Good");
	}
}