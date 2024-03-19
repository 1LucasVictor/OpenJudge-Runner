#include <stdio.h>
#include<string.h>

int main(void)
{
	char str[21] = {};
	char str2[21] = {};
	int len;
	int i = 0;
	fgets(str,21,stdin);
	len = strlen(str);
	
	for(i = 0; i < len; i++){
	    str2[i] = str[len - i - 1];
	}
	
	printf("%s\n",str2);
	
	

	return 0;
}
