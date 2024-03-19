#include <stdio.h>
#include <stdlib.h>
int main(void) {
	char c[2];
	int s=0;
	while(scanf("%c",&c[0])!=EOF && (s || c[0]!='0')){
		c[1]='\0';
		if(c[0]=='\n'){
			printf("%d\n",s);
			s=0;
		}
		s+=atoi(c);
	}
	return 0;
}