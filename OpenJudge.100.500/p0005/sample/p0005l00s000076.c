#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[20], str2[20];
	int i,j=0;
	
	scanf("%s", str1);
	
	for (i = strlen(str1) - 1; i >= 0; i--){
		
		str2[j] = str1[i];
		
		j++;
	}
	str2[j] = '\0';
	
	printf("%s\n", str2);
	
}