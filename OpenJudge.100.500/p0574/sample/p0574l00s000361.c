#include <stdio.h>

int main(void){
	char s[5];
	scanf("%s",&s);
	
	int i=0,flag=0;
	while(s[i] != '\0'){
		if(s[i] == s[i+1]){
			flag=1;
		}
		i++;
	}
	if(flag == 1){
		printf("Bad\n");
	}else{
		printf("Good\n");
	}
	
	return 0;
}