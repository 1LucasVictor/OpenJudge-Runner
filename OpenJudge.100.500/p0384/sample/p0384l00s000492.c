#include <stdio.h>
int main(void){
    char ch;
    
    while(1){
        scanf("%c", &ch);
        if (ch == '\n') break;
        if('a' <= ch && ch <= 'z') ch -= 32;
        else if('A' <= ch && ch <= 'Z') ch += 32;
        printf("%c", ch);
    }
    puts("");
    return 0;
}
