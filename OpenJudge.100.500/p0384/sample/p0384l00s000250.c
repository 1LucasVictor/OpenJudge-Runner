#include <stdio.h>
#include <ctype.h>
int main(void)
{
	char ch,chp;
	while(1){
	    scanf("%c",&ch);
		if(ch=='\n') break;
		else if(islower(ch)){
			chp=toupper(ch);
		}
		else{
			chp=tolower(ch);
		}
		printf("%c",chp);
	}
	printf("\n");
    return 0;
}