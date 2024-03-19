#include<stdio.h>
int main()
{
	int c=0;
	char s[200011],t[200011];

	scanf("%s%s",s,t);

	for(int i=0;s[i]!='\0';i++)
		if(s[i]!=t[i])
			c++;

	printf("%d",c);
	return 0;
}