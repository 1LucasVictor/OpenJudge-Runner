#include<stdio.h>
int main(){
	char s[3];
	scanf("%s",&s);
	int i;
		if((s[0]=='B'&&s[1]=='B'&&s[2]=='B')||(s[0]=='A'&&s[1]=='A'&&s[2]=='A')){
			printf("No");
		}
		else{
			printf("Yes");
		}
}