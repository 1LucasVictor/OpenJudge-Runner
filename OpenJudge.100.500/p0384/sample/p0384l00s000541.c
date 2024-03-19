#include <stdio.h>
#include <ctype.h>
int main(){
    char ch;
    while (1){
        scanf("%c", &ch);
        if(ch=='\n')
		{printf("\n");return 0;}
		if (isupper(ch)){printf("%c", tolower(ch));}
        else            {printf("%c", toupper(ch));}
    }
}