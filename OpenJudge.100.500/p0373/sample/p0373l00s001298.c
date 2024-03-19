#include <stdio.h>
//#include <string.h>

int main() {
    int w, h, i, j;

    while (1) {
        scanf("%d %d", &h, &w);

        if (w == 0 && h == 0)
            break;

        for (i = 0; i < h; ++i) {
            for (j = 0; j < w; ++j) {
                if (j == 0 || j == w-1 || i == 0 || i == h-1)
                    printf("#");
                else
                    printf(".");
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
