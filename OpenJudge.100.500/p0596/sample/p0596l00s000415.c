#include <stdio.h>

int main(void)
{
    char c;
    int r, b;

    r = b = 0;
    while((c = getchar()) != '\n'){
        if(c == '0'){
            r++;
        }else{
            b++;
        }
    }
    printf("%d\n", r < b ? r * 2 : b * 2);
    return 0;
}