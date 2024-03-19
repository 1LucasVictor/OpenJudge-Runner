#include <stdio.h>

int main(void)
{

        int a, h, i;

        scanf("%d%d", &h, &a);
        i = 0;
        while (h >= 0){
                h = h - a;
                i ++;
        }
        printf("%d\n", i);

        return 0;
}
