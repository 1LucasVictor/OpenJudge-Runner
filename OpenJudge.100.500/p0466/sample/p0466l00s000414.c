#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, n;
    char s[12], t[13];

    scanf("%s", s);
    scanf("%s", t);

    for(i = 0; s[i] != '\0'; i++) {
        if(t[i] == '\0' || s[i] != t[i]) {
            printf("No\n");
            return 0;
        }
    }
    if(t[i] != '\0' && t[i+1] == '\0') {
        printf("Yes\n");
        return 0;
    }
    printf("No\n");

    return 0;
}
