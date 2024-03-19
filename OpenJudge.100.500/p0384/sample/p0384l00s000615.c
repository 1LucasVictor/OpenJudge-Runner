#include <stdio.h>
#include <ctype.h>

int main(){
    int i;
    char ch;
    while(1){
        ch = getchar();
        if(ch == '\n')break;

        if(islower(ch)) printf("%c", toupper(ch));
        else if(isupper(ch)) printf("%c", tolower(ch));
        else printf("%c", ch);
    }
    putchar('\n');
}
