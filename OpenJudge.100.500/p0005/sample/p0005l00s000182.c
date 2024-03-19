#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[20];
	char str2[20];
	int i, j;
	int len;
	
	scanf("%s", str1);
	
	len = strlen(str1);
	i = 0;
	len--;
	while (len >= 0){
			str2[i] = str1[len];
			len--;
			i++;
	}
	str2[i] = '\0';
	printf("%s\n", str2);
	
	return (0);
}