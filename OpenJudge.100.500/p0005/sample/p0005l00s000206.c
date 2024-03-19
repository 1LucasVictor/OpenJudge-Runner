#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[20];
	int mojisu;
	int a;
	
	scanf("%s", str);
	
	mojisu = strlen(str);
	
	for (a = mojisu - 1; a >= 0; a--){
		printf("%c", str[a]);
	}
	
	printf("\n");
	
	return (0);
}