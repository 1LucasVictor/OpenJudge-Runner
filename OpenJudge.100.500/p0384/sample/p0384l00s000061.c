#include<stdio.h>
#include<string.h>

int main(){
	char input[1500];
	int i = 0;
	
	scanf("%[^\n]",input);
	
	for(i=0;i<sizeof(input);i++){
		if((input[i] >= 'A') && (input[i] <+ 'Z')){
			input[i] = input[i] + 0x20;
		}
		else if((input[i] >= 'a') && (input[i] <+ 'z')){
			input[i] = input[i] - 0x20;
		}
		else{
			input[i] = input[i];
		}
	}
	printf("%s\n",input);
return 0;
}
