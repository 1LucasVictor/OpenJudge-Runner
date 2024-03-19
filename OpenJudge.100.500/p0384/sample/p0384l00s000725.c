#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    char ch;
    
    while(1){
        scanf("%c", &ch);
        if(ch == '\n')break;
        if('a'<= ch && ch <='z'){
            ch = (ch - 'a') + 'A';
        }else if('A'<= ch && ch <='Z'){
            ch = (ch - 'A') + 'a';
        }
        printf("%c",ch);
    }
    printf("\n");
    return 0;
}

