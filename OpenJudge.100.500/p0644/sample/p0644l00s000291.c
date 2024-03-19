#include<stdio.h>
int main(void)
{
	char s[4];
	scanf("%s",&s);
	int i=0;
	if(s[0]=='1'){
		++i;
	}
	if(s[1]=='1'){
		++i;
	}
	if(s[2]=='1'){
		++i;
	}
	printf("%d\n", i);
	return 0;
}