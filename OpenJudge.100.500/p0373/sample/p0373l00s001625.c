#include <stdio.h>

int main(void) {
    for(;;) {
        int W, H;
        scanf("%d %d", &W, &H);
        if (W == 0 || H == 0) {
            return 0;
        } else {
            for (int i = 1; i <= W; i++) {
                if (i == 1 || i == W) {
                    for (int j = 1; j <= H; j++) {
                        printf("#");
                    }
                } else {
                    printf("#");
                    for (int j = 2; j <= H - 1; j++) {
                        printf(".");
                    }
                    printf("#");
                }
                puts("");
            }
            puts("");
        }
    }
}
