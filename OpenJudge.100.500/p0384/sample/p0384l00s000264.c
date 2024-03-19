#include <stdio.h>

int main(int argc, const char * argv[]) {
    char ch;
    
    while (1) {
        scanf("%c", &ch);
        //変換
        if (ch>=65 && ch<=90) {
            ch += 32;
        }else if(ch>=97 && ch <=122){
            ch -= 32;
        }
        printf("%c", ch);
        if (ch == '\n') break;
    }
    return 0;
}
