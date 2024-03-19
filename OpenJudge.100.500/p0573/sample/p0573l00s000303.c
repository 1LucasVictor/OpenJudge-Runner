#include <stdio.h>

int main()
{
    int ca[256] = {};
    int cnt = 0;
    char ch;

    for (int i = 0; i < 4; i++) {
        ch = getchar();

        if (!ca[ch]) {
            cnt++;
            ca[ch] = 1;
        }
    }

    if (cnt == 2) {
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }
    
    return 0;
}
