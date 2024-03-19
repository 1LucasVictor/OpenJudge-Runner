#include<stdio.h>
#include<ctype.h>
int main(void){
	char a;
	while(1){
		scanf("%c",&a);
		if(isupper(a)!=0){
			a=tolower(a);
			printf("%c",a);
		}else if(islower(a)!=0){
			a=toupper(a);
			printf("%c",a);
		}else printf("%c",a);
		if(a=='\n')break;
	}
	return 0;
}

