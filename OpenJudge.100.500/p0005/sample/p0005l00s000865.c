#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[21];
	char rev[21];
	int i;
	int j;
	
	scanf("%s", str);
	j = 0;
	
	for(i = strlen(str) - 1; i >= 0; i--){
		rev[j] = str[i];
		j++;
	}
	rev[j] = '\0';
	puts(rev);
	return (0);
	
}