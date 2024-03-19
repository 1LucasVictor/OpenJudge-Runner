#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int i,len,count=0;
	char str[21],s[1000];
	for (;;)
	{
		scanf("%s", &s);
		len = strlen(s);
		if (1 <= len && len <= 20){
			strcpy(str, s);
			break;
		}
	}
	for (i = 0; str[i] != '\0';i++){ count++; }
	for (i=count-1; i >= 0; i--){
		printf("%c", str[i]);
	}
	return 0;
}