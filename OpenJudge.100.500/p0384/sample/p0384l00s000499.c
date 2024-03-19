#include<stdio.h>
#include<ctype.h>
int main(void){
	char a;
	while(1){
		scanf("%c",&a );
		if(a=='\n')break;
		if(islower(a))printf("%c",toupper(a) );
		else printf("%c",tolower(a) );
	}
	printf("\n");
	return 0;
}