#include <stdio.h>
#include <ctype.h>

int main(void){
	char ch[1200];	
	int i=0;

	fgets(ch, 1200, stdin);

	while (ch[i] != '\0'){
		if (islower(ch[i])){
			ch[i] = toupper(ch[i]);
		}
		else if (isupper(ch[i])){
			ch[i] = tolower(ch[i]);
		}
		i++;
	}
	fputs(ch, stdout);
	
	return 0;
}