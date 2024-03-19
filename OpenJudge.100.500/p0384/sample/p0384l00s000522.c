#include <stdio.h>

int main(void)
{
	char str[1201];
	int i;

	i = 0;
	while((str[i] = getchar()) != '\n')
	{
		if( ('a' <= str[i] && str[i] <= 'z') || ('A' <= str[i] && str[i] <= 'Z') )
			str[i] ^= 32;
		i++;
	}
	str[i] = '\0';
	printf("%s\n", str);

	return (0);
}

