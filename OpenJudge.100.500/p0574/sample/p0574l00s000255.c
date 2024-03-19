#include<stdio.h>
int main()
{
	char s[4];
	int i,a;

	scanf("%s",s);

	for(i=0;i<3;i++)
	{
		if(s[i]==s[i+1])
			a=1;
	
	}
	if(a==1)
		printf("Bad\n");
	else
		printf("Good\n");
return 0;
}
