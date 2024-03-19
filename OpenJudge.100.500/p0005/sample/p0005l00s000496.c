#include <stdio.h>
int main(){
	char str[22];
	char *sp,*sp2;

	scanf("%s",str);
	sp=&str[22];
	while(sp!=str){
		if(*sp=='\0')sp2=sp;
		sp--;
	}
	while(sp2!=str){
		sp2--;
		printf("%c",*sp2);
	}
	printf("\n");

	return 0;
}