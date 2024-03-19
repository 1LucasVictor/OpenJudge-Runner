#include <stdio.h>

int main(void)
{
    unsigned char s[128], t[128];
    scanf("%s\n", s);
    scanf("%s\n", t);
    int count = 0;
    for(int i = 0; s[i] != '\0'; i++) {
        if(s[i] != t[i]) {
            s[i] = t[i];
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
