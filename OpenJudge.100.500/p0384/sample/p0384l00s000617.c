#include <stdio.h>
int main()
{
//	char str[1200];
	char ch;
	int i=0,j;

	while(1){
		scanf("%c",&ch);
		if(ch=='\n') break;
		
		//大文字か小文字かを判定する
		if(ch>='a' && ch<='z'){
			ch=ch-32;
			//printf("%c",ch);
		}
		else if(ch>='A' && ch<='Z'){
			ch=ch+32;
		//	printf("%c",ch);
		}else{
		   // printf("%c",ch);
		}
		printf("%c",ch);
	}
	printf("\n");
	return 0;
}
