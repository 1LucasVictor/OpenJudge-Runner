#include <stdio.h>

void branch(int w, int h, int x, int y, int r) {
    if (x - r < 0 || w < x + r) {
	printf("No\n");
    } else {
        if (y - r < 0 || h < y + r) {
	    printf("No\n");
	} else {
	    printf("Yes\n");
	}
    }
}

int main(void) {
    int w, h, x, y, r;

    scanf("%d %d %d %d %d", &w, &h, &x, &y, &r);
    branch(w, h, x, y, r);
    
    return 0;
}
