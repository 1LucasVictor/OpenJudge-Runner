#include <stdio.h>
 
int main()
{
    int a, b, c, tmp;
    scanf("%d %d %d", &a, &b, &c);
    while(1){
    if (a > b) {
        tmp = a;
        a = b;
        b = tmp;
    }
    else if (b > c) {
        tmp = b;
        b = c;
        c = tmp;
    }
    else if (a > b) {
        tmp = a;
        a = b;
        b = tmp;
    }
    else break;
    }
    printf("%d %d %d\n", a, b, c);
    return 0;
}

