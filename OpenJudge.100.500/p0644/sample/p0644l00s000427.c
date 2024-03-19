#include <stdio.h>

int main() {
   
    char input[3];
    int index = 0;
    if ( scanf("%s", input) ) {
        for (int i = 0; i < 3; ++i) {
            char c = input[i];
            if (c == '1') {
                index++;
            }
        }
        printf("%d\n", index);
    }
    return 0;
}
