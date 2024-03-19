#include<stdio.h>
#include<ctype.h>

int main(void)
{
	char c;

	while(1){
		scanf("%c",&c);
		if(c == '\n')break;
		if(islower(c) != 0){
			c = toupper(c);
			printf("%c",c);
		}else{
			c = tolower(c);
			printf("%c",c);
			}
	}
	printf("\n");
	return 0;
}