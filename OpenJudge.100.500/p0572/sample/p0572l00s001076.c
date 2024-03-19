#include <stdio.h>

int main()
{
    int l, r;
    int i, j;
    int ijmod;
    int min = 2019;

    char buf[256];
    fgets(buf, 256, stdin);
    sscanf(buf, "%d %d", &l, &r);

    for (i = l; i <= r; i++){
        for (j = i++; j <= r; j++){
            ijmod = (i * j) % 2019;
            if (min > ijmod){
                min = ijmod;
            }
        }
    }

    printf("%d", min);
}