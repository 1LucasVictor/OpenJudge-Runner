#include <stdio.h>

int main(void)
{
    int h, w, i, j;

    scanf("%d %d", &h, &w);

    while ((h!=0) || (w!=0)) {
        // ceiling
        for (j=0; j<w; j++) {
            printf("#");
        }
        printf("\n");

        for (i=0; i<h-2; i++) {
            printf("#");
            for (j=0; j<w-2; j++) {
                printf(".");
            }
            printf("#\n");
        }
        
        // bottom
        for (j=0; j<w; j++) {
            printf("#");
        }
        printf("\n\n");
        
        scanf("%d %d", &h, &w);
    }

    return 0;
}
