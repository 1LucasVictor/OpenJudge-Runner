#include <stdio.h>
int main(void){
    char s, cnt, i;
    for (i = 0; i < 3; i++) {
        scanf("%c", &s);
        cnt += (s == '1' ? 1 : 0);
    }
    printf("%d\n", cnt);
    return 0;
}