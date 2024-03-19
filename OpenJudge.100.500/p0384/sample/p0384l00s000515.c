#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char ch;
	while(1){
		scanf("%c", &ch);
		if(isupper(ch)) {
			ch = tolower(ch);
		} else if(islower(ch)) {
			ch = toupper(ch);
		}
		printf("%c",ch);
    		if ( ch == '\n' ) break;
	}	
	return 0;
}