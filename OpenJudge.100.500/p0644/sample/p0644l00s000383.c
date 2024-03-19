#include <stdio.h>

int conv_chr2int(char ch) {
    if(ch=='1') {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    char s1, s2, s3;
    scanf("%c%c%c", &s1, &s2, &s3);

    int a, b, c;
    a = conv_chr2int(s1);
    b = conv_chr2int(s2);
    c = conv_chr2int(s3);

    printf("%d\n", a+b+c);

    return 0;
}