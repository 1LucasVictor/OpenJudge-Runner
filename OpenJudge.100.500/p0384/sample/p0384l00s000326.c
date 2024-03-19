/* Character - Toggling case */
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(void){
char ch;
int  length = 0;
char *b = NULL ;
unsigned n = 1 ;

/* Read line */
while (1){
        scanf("%c", &ch);
        if (ch == '\n') break;
        b = (char *)realloc(b, sizeof(char) * (n + 1));

        if      (ch != tolower(ch)) b[n - 1] = tolower(ch);
        else if (ch != toupper(ch)) b[n - 1] = toupper(ch);
        else                        b[n - 1] = ch;

        b[n] = '\0';
        n++;

}
/* printf("%d\n", n); for debug */

/* Print toggled strings */
printf("%s\n", b);

return 0;
}