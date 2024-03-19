#include<stdio.h>
int main(void){
	char str[1201];
	int i;
	
	fgets(str, 1200, stdin);
	for(i = 0; str[i] != '\0'; i++){
		if(65 <= str[i] && str[i] <= 90){
			str[i] += 32;
		}else if(97 <= str[i] && str[i] <= 122){
			str[i] -= 32;
		}
	}
	printf("%s", str);
	
	return 0;
}

