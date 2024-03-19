#include <stdio.h>

int main(void) {
    char s[5];
    scanf("%s",s);
    int flag = 0;
    for(int i = 0; i < 4; i++) {
        int count = 0;
        for(int j = i; j < 4; j++) {
            if(s[i] == s[j]) count++;
        }
        if(count == 2) flag++;
    }
    if(flag == 2) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}
