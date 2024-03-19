#include <stdio.h>

int main(int argc, const char * argv[])
{

    char str[20];
    int i, j;
    
    for (i = 0; i < 20; i++) {
        str[i] = getchar();
        if (str[i] == '\n') {
            break;
        }
    }
    for (j = i - 1; 0 <= j; j--) {
        printf("%c",str[j]);
    }
    puts("");
    return 0;
}