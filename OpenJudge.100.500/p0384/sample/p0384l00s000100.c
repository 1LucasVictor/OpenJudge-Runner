#include <stdio.h>

int main()
{
    int i = 0;
    char ch;
    char inputStr[1200];

    fgets(inputStr, 1200, stdin);

    while(inputStr[i] != '\0') {
        ch = inputStr[i];
        if ('A' <= ch && ch <= 'Z') {
            ch += 32;
        }
        else if ('a' <= ch && ch <= 'z') {
            ch -= 32;
        }
        else {

        }
        printf("%c", ch);
        i++;
    }

    return 0;
}
