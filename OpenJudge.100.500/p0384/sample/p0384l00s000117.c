//文字変換
#include <stdio.h>
#define MY_STR_MAX 1250
int main(){
    char c;
    for (;;) {
       scanf("%c", &c);
       if (c>=60&&c<=90) {
           c += 32;
       }else if (c>=97&&c<=122) {
           c -= 32;
       }else if (c=='\n') {
           break;
       }
       putchar(c);
    }
    putchar('\n');
}

