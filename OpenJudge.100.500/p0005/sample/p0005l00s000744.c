/*
*/
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
int main()
{
	char str[21];
	int i;
	int length;
	scanf("%s",str);
	length=strlen(str);
	for(i=length-1; i>=0; i--){
		printf("%c",str[i]);
	}
	puts("");
    return 0;
}