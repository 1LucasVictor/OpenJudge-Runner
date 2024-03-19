#include <stdio.h>
#include <string.h>

main()
{
	char str[20];
	char copy_str[20];
	int len;
	int i = 0;
	
	scanf("%s", str);
	
	len = strlen(str);
	
	while (str[i] != '\0'){
		copy_str[i] = str[len - 1];
		i++;
		len--;
	}
	copy_str[i] = '\0';
	
	printf("%s\n", copy_str);
	
	return (0);
}