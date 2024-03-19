#include<stdio.h>
#include<string.h>

int main(void){
	char s[10],t[11];
	char a;
	scanf("%s",s);
	scanf("%c",&a);
	//printf("%c",a);
	scanf("%s",t);
	if(strlen(s)+1!=strlen(t)){
		printf("No");
		return 0;
	}
	for(int i=0;i<strlen(s);i++){
		if(s[i]!=t[i]){
			printf("No");
			return 0;
		}
	}
	printf("Yes");
	return 0;
}