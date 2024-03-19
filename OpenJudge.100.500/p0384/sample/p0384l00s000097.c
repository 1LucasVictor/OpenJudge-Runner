#include <stdio.h>
int main(void){
    char ch;
    for(;;){
        scanf("%c", &ch);
        if(ch == ',') printf("%c", ch);
        if(ch == ' ') printf(" ");
        if(ch == '.') printf("%c", ch);
        if('a' <= ch && ch <= 'z') 
            printf("%c", ch - 32);
        if('A' <= ch && ch <= 'Z')
            printf("%c", ch + 32);
        if(ch == '\n') break;
    }
    putchar('\n');
    
    return 0;
}
