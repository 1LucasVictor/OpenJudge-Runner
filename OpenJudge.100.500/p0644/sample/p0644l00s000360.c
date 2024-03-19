#include <stdio.h>
int main(int argc, char const *argv[]){
	char s[3];
	scanf("%s",s);
	printf("%d",s[0]+s[1]+s[2]-'0'*3);
	return 0;
}