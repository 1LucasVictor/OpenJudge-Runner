#include <stdio.h>

int main(void){
	char str[20];
	char temp;
	int x = 1;
	int i = 0;
	
	scanf("%s", str);
	while(str[x]){
		x++;
	}
	while(x - i > i){
		temp = str[i];
		str[i] = str[x-1 - i];
		str[x-1 - i] = temp;
		
		i++;
	}



	printf("%s\n", str);
	return 0;
}