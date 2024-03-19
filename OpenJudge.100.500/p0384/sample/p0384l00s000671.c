#include <stdio.h>


int main(void) {
	char moji;
	
	while(1){
		scanf("%c",&moji);
		if(moji >=65 && moji <=90)
		{
			printf("%c",moji+32);
		}
		else if(moji>=97 && moji <=122)
		{
			printf("%c",moji-32);
		}
		else printf("%c",moji);
		
		if(moji == '\n') break;
	}
	
	
	return 0;
}