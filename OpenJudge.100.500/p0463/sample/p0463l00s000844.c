#include <stdio.h>
#include <string.h>

int main()
{
	char s[101];
	int i,n;
	scanf("%s",s);
	n=strlen(s);
	if(s[n-1]=='2' || s[n-1]=='4' || s[n-1]=='5'|| s[n-1]=='7'|| s[n-1]=='9')
	printf("hon\n");
	else if(s[n-1]=='0' || s[n-1]=='1' || s[n-1]=='6'|| s[n-1]=='8')
	printf("pon\n");
	else
	printf("bon\n");
	
	return 0;
}