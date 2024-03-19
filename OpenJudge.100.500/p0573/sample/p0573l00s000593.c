#include <stdio.h>
#include <string.h>
int main(){
	char s[10];

	scanf("%s",s);
	
	if(s[0]==s[1]&&s[0]==s[2]&&s[0]==s[3]){
		printf("No\n");
	}
	else if(s[0]==s[1]){
		if(s[2]==s[3]){
			printf("Yes\n");
		}else {
			printf("No\n");
		}
	}else if(s[0]==s[2]){
		if(s[1]==s[3]){
			printf("Yes\n");
		}else {
			printf("No\n");
		}
	}else if(s[0]==s[3]){
		if(s[1]==s[2]){
			printf("Yes\n");
		}else {
			printf("No\n");
		}
	}else {
		printf("No\n");
	}
}