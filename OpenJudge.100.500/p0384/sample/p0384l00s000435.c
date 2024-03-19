#include<stdio.h>

int main(void)
{
    int i;
    int ch;
    while((ch = getchar()) != EOF ){
        if(ch >= 'a' && ch <='z'){
            ch = 'A' + ch - 'a';
        }
        else if(ch >= 'A' && ch <= 'Z'){
            ch = 'a' + ch - 'A';
        }
        printf("%c", ch);
    }
    return 0;
}