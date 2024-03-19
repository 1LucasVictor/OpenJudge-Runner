#include <stdio.h>
int main(void)
{
    char c;
    int a;
    while(scanf("%c", &c), c != '0'){
        a=0;
        a += c%48;
        while(scanf("%c", &c), c != '\n'){
            a += c%48;
        }
        printf("%d\n", a);
    }
    return 0;
}