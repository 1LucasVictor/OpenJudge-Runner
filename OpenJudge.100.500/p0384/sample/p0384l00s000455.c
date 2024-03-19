#include<stdio.h>
int main(){
	unsigned char usW_D_str[1200];
	unsigned short usW_C_i;
	
	for(usW_C_i = 0;usW_C_i < 1200;usW_C_i++){
		usW_D_str[usW_C_i] = '\0';
	}
	
	for(usW_C_i = 0;usW_C_i < 1200;usW_C_i++){
		scanf("%c", &usW_D_str[usW_C_i]);
		if(usW_D_str[usW_C_i] == '\0'){
			break;
		}
	}
	
	for(usW_C_i = 0;usW_C_i < 1200;usW_C_i++){
		if(usW_D_str[usW_C_i] >= 'A' && usW_D_str[usW_C_i] <= 'Z'){
			usW_D_str[usW_C_i] += 32;
		}
		else if(usW_D_str[usW_C_i] >= 'a' && usW_D_str[usW_C_i] <= 'z'){
			usW_D_str[usW_C_i] -= 32;
		}
		else;
	}
	
	for(usW_C_i = 0;usW_D_str[usW_C_i] != '\0';usW_C_i++){
		printf("%c", usW_D_str[usW_C_i]);
	}
	
	return 0;
}
