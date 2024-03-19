#include <stdio.h>
#include <stdlib.h>

void main() {
        char buf[128];
        int a, b;
        float t;
        fgets(buf, 128, stdin);
        sscanf(buf, "%d %d %f\n", &a, &b, &t);
        int num = 0;
        int i, j=(t+0.5)/a;
        for(i=0; i<j; i++) {
                num += b;
        }
        printf("%d\n", num);
        return ;
}
