#include <stdio.h>
 
void mkwall(int x, int y, int h, int w);
 
int main()
{
    for (;;) {
        int h, w, x, y;
        scanf("%d %d", &h, &w);
        if (h == 0 & w == 0) {
            return 0;
        }
        for (y = 0; y < h; y++) {
            for (x = 0; x < w; x++) {
                mkwall(x + 1, y + 1, h, w);
            }
            printf("\n");
        }
        printf("\n");
    }
}
 
void mkwall(int x, int y, int h, int w)
{
    if (x == 1 | x == w | y == 1 | y == h) {
        printf("#");
    } else {
        printf(".");
    }
}