#include <stdio.h>
int main(){
	char s[5];
	if(scanf("%s",s)==-1){
		return 1;
	};
	if(s[0]==s[1]||s[1]==s[2]||s[2]==s[3]){
		printf("%s","Bad");
		}
	else{
		printf("%s","Good");
	}
	return 0;
}