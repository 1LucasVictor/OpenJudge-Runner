#include <stdio.h>

int main()
{
    char str[1200];

    int ascii_a = 'a';
    int ascii_z = 'z';
    int ascii_A = 'A';
    int ascii_Z = 'Z';

    int ascii_diff = ascii_a - ascii_A;

    int i;
    int  ascii_str;
    for (i = 0; ; i++) {
        scanf("%c", &str[i]);
        ascii_str = str[i];
        if (str[i] == '\n') {
            break;
        } else if ((ascii_a <= ascii_str)&&(ascii_str <= ascii_z)) {
            printf("%c", ascii_str - ascii_diff);
        } else if ((ascii_A <= ascii_str)&&(ascii_str <= ascii_Z)) {
            printf("%c", ascii_str + ascii_diff);
        } else {
            printf("%c", str[i]);
        }
    }
    printf("\n");
    return 0;
}

