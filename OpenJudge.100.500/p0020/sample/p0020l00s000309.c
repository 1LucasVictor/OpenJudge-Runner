#include <stdio.h>

int main() {
    float x1, x2, x3, x4;
    float y1, y2, y3, y4;
    int n;
    
    scanf("%d", &n);
    while (n-- > 0) {
        scanf("%f %f %f %f %f %f %f %f", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
        if ((y2-y1)*(x4-x3) - (x2-x1)*(y4-y3) == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}