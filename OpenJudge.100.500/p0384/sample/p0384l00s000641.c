#include <stdio.h>
#include <ctype.h>
int main(void){
	char a;
	
	while(1){
		scanf("%c",&a);
		if(a == '\n')break;
		if(a == tolower(a)){
			printf("%c",(char)toupper(a));
		}else{
			printf("%c",(char)tolower(a));
		}
	}
	printf("\n");
    return 0;
}