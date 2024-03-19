#include<stdio.h>

int main(){
	char s[10];
	
	scanf("%s",&s);
	
	if(s[1]=='7'||s[2]=='7'||s[3]=='7'){
		printf("Yes\n");
	}else{
		printf("No\n");
	}
	return 0;
}