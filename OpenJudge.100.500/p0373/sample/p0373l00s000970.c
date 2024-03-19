#include <stdio.h>

int main(void)
{
	int h, w, i, j;
	
	while (1) {
		scanf("%d %d", &h, &w);

		if (h == 0 && w == 0)
			break;

		for (i = 1; i <= h; i++) {
            for (j = 1; j <= w; j++) {
                if (i == 1 || i == h){
                    printf("#");
                    if (j == w)
                        printf("\n");
                } else {
                    if (j == 1)
                        printf("#");
                    else if (j == w)
                        printf("#\n");
                    else
                        printf(".");
                }
            }
        }
        
        printf("\n");
    }
    
    return 0;
}