#include <stdio.h>

int main(){
	int i;
	char in[20];
	
	for(i = 0; i < 20; i++){
		in[i] = '\0';
	}
	
	scanf("%s", &in);
	
	for(i = 19; i > -1; i--){
		if(in[i] != '\0'){
			printf("%c", in[i]);
		}
	}
	
	printf("\n");
	
	return 0;
}