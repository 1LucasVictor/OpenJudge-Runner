#include<stdio.h>
int main()
{
	char s[4],i;
	scanf("%s",s);
	for(i=0;i<3;i++)
	{
		if(s[i]!=s[i+1])
			continue;
		if(s[i]==s[i+1]){
			printf("Bad\n");
			break;
		}
	}
	if(i==3)
		printf("Good\n");
	return 0;
}