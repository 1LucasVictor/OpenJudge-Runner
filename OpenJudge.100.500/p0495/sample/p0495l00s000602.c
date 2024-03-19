#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define rep(i,l,n) for(int i=l;i<n;i++)

int main(){
	char s[5];
	scanf("%s",s);
	if( strcmp(s,"AAA")==0 ){
		printf("No");
	}else if( strcmp(s,"BBB")==0 ){
		printf("No");
	}else printf("Yes");
	return 0;
}
