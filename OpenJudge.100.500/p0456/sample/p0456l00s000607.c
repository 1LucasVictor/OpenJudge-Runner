#include <stdio.h>

int main(void) {
    char s[200001];
    char t[200001];
    scanf("%200000s", s);
    scanf("%200000s", t);
    int count = 0;
    for (int i = 0; i < 200000; ++i) {
        if(s[i] != t[i]){
            count++;
        } else if(s[i] == '\0') {
            break;
        }
    }
    printf("%d", count);
    return 0;
}
