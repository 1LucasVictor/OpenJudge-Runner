#include <stdio.h>

int main(void)
{
	char str[20];
	int i, j = 0;
	
	for (i = 0; i < 20; i++){
		str[i] = 0;
	}
	scanf("%s", str);
	
	while (str[j] != '\0'){
		j++;
	}
	j--;
	while (j >= 0){
		printf("%c", str[j]);
		j--;
	}
	
	printf("\n");
	
	return (0);
}