#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[20];
	char str2[20];
	int soe = 0;
	int i;
	
	scanf("%s", str1);
	
	soe = strlen(str1);
	
	strcpy(str2, str1);
	
	for (i = 0; soe >= 0; soe--){
		str2[i] = str1[soe - 1];
		
		i++;
	}
	
	str2[i] = '\0';
	
	printf("%s\n", str2);
	
	return (0);
}