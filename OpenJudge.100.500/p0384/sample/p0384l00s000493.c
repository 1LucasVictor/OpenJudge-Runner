#include<stdio.h>
#include<ctype.h>

int main (void){
	
	char ch;
	int i=0,t;
	char str[1200] = {};
	
	while(1){
		
		scanf("%c",&ch);
		if(islower((int)ch) != 0){
		ch = toupper(ch);
		}else if(isupper((int)ch) != 0){
		ch = tolower(ch);
		}else{
			;
		}
		str[i] = ch;
		i++;
	if( ch == '\n') break;
	}
	
	printf("%s",str);
return 0;
}