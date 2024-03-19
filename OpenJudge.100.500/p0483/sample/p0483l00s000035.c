#include<stdio.h>
#include<string.h>
int main(){
	char s[10];
	scanf("%s",s);
	for(int i=0;i<strlen(s);i++){
		if(s[i]=='7'){
			printf("Yes\n");
			return 0;
		}
	}
	printf("No\n");
	return 0;
}