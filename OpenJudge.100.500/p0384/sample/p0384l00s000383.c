#include <stdio.h>
#include <string.h>
char t[100000];
int main(int argc, const char * argv[]) {

    char ch;
    while(1){
        scanf("%c",&ch);
        
        if('A' <= ch && ch <= 'Z'){
            ch=ch+32;
        }else if('a' <= ch && ch <= 'z'){
            ch=ch-32;
        }

        printf("%c",ch);

        if (ch =='\n'){
         break;
        }
    }
    return 0;
}
