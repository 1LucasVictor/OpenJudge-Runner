#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int main() {

    char n[3];

    scanf("%s", n);

    int l = strlen(n);
    char c = n[l - 1];


    if (c == '3') {
        puts("bon");
    } else if (c == '0' || c == '1' || c == '6' || c == '8') {
        puts("pon");
    } else {
        puts("hon");
    }




    return 0;

}
