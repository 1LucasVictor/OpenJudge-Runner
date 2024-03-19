#include<stdio.h>
#include<string.h>

int main(void){
	char s[10],t[11];
	scanf("%s",s);
	scanf("%s",t);
	for(int i=0;i<strlen(s);i++){
		if(s[i]!=t[i]){
			printf("No");
			return 0;
		}
	}
	printf("Yes");
	return 0;
}