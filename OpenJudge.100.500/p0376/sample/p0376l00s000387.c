#include <stdio.h>
int main(void)
{
    int n, i, I; //数列の長さ
    int a[i];

    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n / 2; i++){
        I = a[i];
        a[i] = a[(n - 1) - i];
        a[(n - 1) - i] = I;
    }

    for(i = 0; i < n; i++){
        printf("%d", a[i]);
        if(i != n - 1) putchar(' ');
    }
    putchar('\n');

    return 0;
}
