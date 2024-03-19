#include <stdio.h>
#include <string.h>
#include <ctype.h>



int main()
{
	int  inp;
	while(1) {
		inp = getchar();

		if (inp == '\n') {
                        putchar(inp);
			break;
		}
		
		/*--??±?°???????? --*/
		if (islower(inp)!=0) {
			inp = toupper(inp);
		}
		else {
			/*--??±??§??????? --*/
			if (isupper(inp)!=0) {
				inp = tolower(inp);
			}
		}
		putchar(inp);
	}

	return 0;
}