#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[21], str2[21];
	int i, n, len;
	
	scanf("%s", str1);
	
	len = strlen(str1);
	
	n = len - 1;
	
	for (i = 0; i < len; i++){
		str2[n] = str1[i];
		
		n--;
	}
	str2[len] = '\0';
	
	printf("%s\n", str2);
	
	return (0);

}