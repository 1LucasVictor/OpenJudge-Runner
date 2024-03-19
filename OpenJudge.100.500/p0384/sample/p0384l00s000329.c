/*
 HINT
#include<ctype.h>
    int islower(char ch): ch が小文字なら true を返す
    int isupper(char ch): ch が大文字なら true を返す
    int tolower(char ch): ch の小文字を返す
    int toupper(char ch): ch の大文字を返す
*/

#include<stdio.h>
#include<ctype.h>
main()
{
	char ch;
	
	while(1){
		scanf("%c",&ch);
		if(ch=='\n') break;
		
		if(islower(ch)!=0) printf("%c",toupper(ch));
		else if(isupper(ch)!=0) printf("%c",tolower(ch));
		else printf("%c",ch);
	}
	printf("\n");
	
	return 0;
}