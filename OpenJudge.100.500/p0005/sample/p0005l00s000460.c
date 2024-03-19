#include <stdio.h>
#include <string.h>

int main()
{
	char s[20],c;
	int i,l;
	scanf("%s",s);
	l = strlen(s);
	for(i=0;i<l/2;i++)
	{
		c=s[i];
		s[i]=s[l-i-1];
		s[l-i-1]=c;
	}
	printf("%s\n",s);
	return 0;
}