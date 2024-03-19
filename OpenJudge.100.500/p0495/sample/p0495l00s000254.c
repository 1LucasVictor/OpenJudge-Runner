#include<stdio.h>
int main(void){
	char s[10000];
	scanf("%s",s);
	if((s[1]=='A'&&(s[0]=='B'||s[2]=='B'))||(s[1]=='B'&&(s[0]=='A'||s[2]=='A'))){
		printf("Yes");
	}else{
		printf("No");
	}
}