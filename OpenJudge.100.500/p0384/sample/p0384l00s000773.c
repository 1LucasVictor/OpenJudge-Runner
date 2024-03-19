#include<stdio.h>
#include<ctype.h>

int main(){
	char c;
	while(scanf("%c",&c)!=EOF){
		if(islower(c)){
			c=toupper(c);
		}else if(isupper(c)){
			c=tolower(c);
		}
		printf("%c",c);
	}
}
