#include<stdio.h>
#include<ctype.h>
#define MAX_WORDS 1200

int main(void){
    int i = 0;
    char str[MAX_WORDS];
    fgets(str, MAX_WORDS, stdin);
    while ( str[i] != '\0' ){
        if ( isalpha(str[i]) ){
            if ( islower(str[i]) ) {
                printf("%c", toupper(str[i]));
            } else if ( isupper(str[i]) ) {
                printf("%c", tolower(str[i]));
            }
        } else {
            printf("%c", str[i]);
        }
        i++;
    }
    return 0;
}
