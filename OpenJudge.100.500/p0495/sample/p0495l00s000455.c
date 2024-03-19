#include<stdio.h>
#include<string.h>

int main() {
    char s[5];
    int len;
    int bus=0;

    scanf("%s", s);
    char set = s[0];

    for(int i=1; i<3; i++) {
        if (set != s[i]) {
            bus = 1;
            break;
        }
    }

    if (bus) printf("Yes");
    else printf("No");

    return 0;
}