#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[21];
	int i,j;
	
	scanf("%s",str);
	
	i = strlen(str) -1;
	
	for(j = i;j >= 0;j--){
		printf("%c",str[j]);
	}
	printf("\n");
	
	return(0);
}