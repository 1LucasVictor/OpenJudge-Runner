#include <stdio.h>

int main(void)
{
	int i;
	char str[4];
	
	scanf("%s", str);
	
	i = 0;
	
	if(str[0] == '1'){
		i++;
	}
	if(str[1] == '1'){
		i++;
	}
	if(str[2] == '1'){
		i++;
	}
	
	printf("%d", i);
	
	return(0);
}