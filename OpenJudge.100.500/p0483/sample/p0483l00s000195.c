#include <stdio.h>

int main() {
    char s[4];
    
    scanf("%s", s);
    int a = 0;
    for (int i = 0; i < 3; ++i){
        if (s[i] == '7')
            a = 1;
    }
    if (a == 0)
        printf("No\n");
    else
        printf("Yes\n");
    return 0;
}
