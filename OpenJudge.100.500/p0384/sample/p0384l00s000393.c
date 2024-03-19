#include <stdio.h>
#include <ctype.h>

int main() {

	char ch, str[1200];
	int i = 0;

	while (1) {

		scanf("%c",&ch);
		if (islower(ch) != 0) {
			ch = toupper(ch);
		}
		else if (isupper(ch)!=0){
			ch = tolower(ch);
		}
		str[i] = ch;
		printf("%c", str[i]);
		i++;
		if (ch == '\n') {
			break;
		}
	}
	return 0;
}