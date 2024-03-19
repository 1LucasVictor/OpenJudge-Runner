#include<stdio.h>
#include<ctype.h>

int main(void){
	char a;
	while(1){
		scanf("%c",&a);
		if(isalpha(a)){
			if(islower(a)){
				printf("%c",toupper(a));
			}
			else{
				printf("%c",tolower(a));
			}
		}
		else{
			printf("%c",a);
		}
		if(a=='\n')break;
	}
	return 0;
}