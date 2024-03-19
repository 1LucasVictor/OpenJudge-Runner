#include <stdio.h>

int main()
{
    int H,W;
    for (;;) {
        scanf("%d %d", &H, &W);

        if ((H == 0)&&(W == 0))
            break;

        int i,j;
        for (i = 0; i < H; i++) {
            if ((i == 0)||(i == H - 1)) {
                for (j = 0; j < W; j++) {
                      printf("#");
                }
            } else {
                for (j = 0; j < W; j++) {
                    if ((j == 0)||(j == W - 1)) {
                        printf("#");
                    } else {
                        printf(".");
                    }

                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return(0);
}

