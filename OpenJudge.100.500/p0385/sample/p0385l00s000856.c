#include <stdio.h>

int main(void)
{
    int i;
    int x, idx = 0;
    int data[1000] = {};

    while(1) {
        scanf("%d", &x);
        if(x == 0) break;

        while(x!=0) {
            data[idx] += x%10;
            x /= 10;
        }
        idx++;
    }

    for(i=0;i<idx;i++) {
        printf("%d\n", data[i]);
    }

    return 0;
}