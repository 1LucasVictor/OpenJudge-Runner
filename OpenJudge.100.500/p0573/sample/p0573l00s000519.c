#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int comp(const void *a, const void *b)
{
	return *(char*)a - *(char*)b;
}

int main(void){
	
	char str[5];
	
	fgets(str,sizeof(str),stdin);
//	printf("%s\n",str);
	
	qsort(str,4,sizeof(char),comp);
	
//	printf("%s\n",str);
	
	if(str[0] == str[1] && str[2] == str[3] && str[0] != str[2])
		printf("Yes");
	else
		printf("No");
	
	return 0;
}