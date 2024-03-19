#include <stdio.h>

int main(void) {

    char n[4];
    int i = 0;

    scanf("%s", n);

    if(n[0] == '1')
        i++;
    if(n[1] == '1')
        i++;
    if(n[2] == '1')
        i++;

    printf("%d", i);


    return 0;
}
