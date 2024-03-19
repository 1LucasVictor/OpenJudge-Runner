#include <stdio.h>

/*SXAQWCG
Aのアスキーコードは65
aのアスキーコードは97
*/


int main(int argc, char const *argv[])
{
	
/*
	char ch = 'A';
	printf("%c = %d\n", ch, ch);

	int num = 122;
	printf("%c = %d\n", num, num);

*/

	char ch;

	while(1) {
		scanf("%c", &ch);
		
		if ('a' <= ch && ch <= 'z') {
			ch -= 32;
		}

		else if ('A' <= ch && ch <= 'Z') {
			ch += 32;
		}



		printf("%c", ch);

		if (ch == '\n') break;


	}





	return 0;

}
