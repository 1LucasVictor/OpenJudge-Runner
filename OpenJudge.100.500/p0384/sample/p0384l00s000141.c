#include<stdio.h>
#include<ctype.h>

char ch;

int i=0;
main(){
while(1){
	scanf("%c",&ch);
	if(islower(ch)){
    	printf("%c",toupper(ch));
    }else if(isupper(ch)){
    	printf("%c",tolower(ch));
    }else{
    printf("%c",ch);
    }
    if ( ch == '\n' ) break;
    }
    
return 0;
}