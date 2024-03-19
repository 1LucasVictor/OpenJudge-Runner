#include<stdio.h>

int check(int g)
{

    int h = 0, k = 1;

    while(k) {
        if(g / k == 0)
            break;
        h++;
        k *= 10;
    }

    return h;
}

int main(void)
{

    int a[200], b[200], x, y, i = 0, j, p;

    while(scanf("%d %d", &x, &y) != EOF) {
        a[i] = x;
        b[i] = y;
        i++;
    }


    for(j = 0; j < i; j++) {
        p = a[j] + b[j];
        printf("%d\n", check(p));
    }

    return 0;
}