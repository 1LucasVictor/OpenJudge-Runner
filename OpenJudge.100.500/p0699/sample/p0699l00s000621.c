// ABC042_A 和風いろはちゃんイージー

#include <stdio.h>

int main(void) {
    
    int input = 0;
    int five = 0;
    int seven = 0;
    int i = 0;

    // input
    for (i = 0; i < 3; i++) {
        scanf("%d", &input);
        if (input == 5) {
            five++;
        } else if (input == 7) {
            seven++;
        }
    }

    // output
    if (five == 2 && seven == 1) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}