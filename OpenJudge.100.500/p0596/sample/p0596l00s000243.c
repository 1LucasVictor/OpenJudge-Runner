#include <stdio.h>

int deleteCube(char *s) {
    int i, one = 0, zero = 0;
    for (i=0; s[i] ;i++) {
        if (s[i] == '1') one++;
        else if (s[i] == '0') zero++;
    }
    return one < zero ? one
         : zero;
}

int main() {
    char s[100001];
    scanf("%s", s);
    printf("%d\n", 2*deleteCube(s));
    return 0;
}