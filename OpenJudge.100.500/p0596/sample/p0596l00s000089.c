#include <stdio.h>
#include <string.h>

int main() {
    char s[10100];
    int len = 0, ans=0;
    int i, j = 0, flag = 1;

    scanf("%s", s);
    len = strlen(s);

    while (flag == 1) {
        flag = 0;
        for (i = 0; i < len-1; i++) {
            if (s[i] == '2') continue;
            j = i+1;
            while (s[j]) {
                if (s[j] == '2') j++;
                else break;
            }
            if (!s[j]) {break;}
             else if (s[i] != s[j]) {
                flag = 1;
                ans += 2;
                s[i] = '2';
                s[j] = '2';
            }
        }
    }
    printf("%d", ans);

    return 0;
}