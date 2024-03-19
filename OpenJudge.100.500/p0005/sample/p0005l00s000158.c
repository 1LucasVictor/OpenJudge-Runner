/*
A0006
Reverse Sequence

*/
#include <stdio.h>
#include <string.h>
main()
{
	char str[100];
	int i,l,h;
	char	w;

	scanf("%s",str);
	l=strlen(str);h=l/2;
	for(i=0;i<h;i++)
	{	w = str[i];
		str[i] = str[l-i-1];
		str[l-i-1]=w;
	}
	printf("%s\n",str);
	return(0);
}