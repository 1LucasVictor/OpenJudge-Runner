#include<stdio.h>

int main(void){
	
	char s[4];
	int i;
	
	scanf("%s",s);
	
	for(i=0;i<3;i++){
		if(s[i]==s[i+1]){
			puts("Bad");
			return 0;
		}
	}
	
	puts("Good");
	
	return 0;
}