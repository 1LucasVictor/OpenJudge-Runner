#include <stdio.h>
 
void sh(int x, int y, int h, int w);
 
int main(void){
	
	while(1){
		int h, w, x, y;
		scanf("%d %d", &h, &w);
		if (h == 0 & w == 0) {
			return 0;
        }
		
        for (y = 0; y < h; y++) {
            for (x = 0; x < w; x++) {
                sh(x + 1, y + 1, h, w);
            }
            printf("\n");
        }
        printf("\n");
    }
}
 
void sh(int x, int y, int h, int w)
{
    if (x == 1 | x == w | y == 1 | y == h) {
        printf("#");
    } else {
        printf(".");
    }
}