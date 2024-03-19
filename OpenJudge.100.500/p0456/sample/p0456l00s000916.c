#include <stdio.h>
#include <string.h>

int main() {

    char s[200001];
    char t[200001];

    scanf("%s %s", s, t);

    int cnt = 0;
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] != t[i]) {
            cnt++;
        }
    }

    printf("%d", cnt);


    return 0;
}
