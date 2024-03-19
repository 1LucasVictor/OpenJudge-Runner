#include <stdio.h>

int main(void){
    int x,y,z;

    scanf("%d %d %d", &x, &y, &z);

    if ((x + y + z) == 17){
        if (x == 7 || y == 7 || z == 7){
            if (x == y || y == z || z == x){
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        } else {
            printf("NO\n");
        }
    } else {
        printf("NO\n");
    }

    return 0;

}