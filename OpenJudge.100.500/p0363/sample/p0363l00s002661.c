#include <stdio.h>

int main(int argc, const char * argv[]) {
    int x, y, z, tmp;
    
    scanf("%d %d %d" , &x, &y, &z);
    if (x>y) {
        tmp=x;
        x=y;
        y=tmp;
    }
    if (y>z) {
        tmp=y;
        y=z;
        z=tmp;
    }
    if (x>y) {
        tmp=x;
        x=y;
        y=tmp;
    }

    printf("%d %d %d\n",x, y, z);
    return 0;
    
}

