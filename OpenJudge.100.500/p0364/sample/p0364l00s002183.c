#include <stdio.h>

int main(void) {
    int w, h;
    int x, y, r;

    scanf("%d %d %d %d %d", &w, &h, &x, &y, &r);

    if(x - r < 0 && x + r > w)
       printf("No\n");
    else
       printf("Yes\n");
    return 0;
}