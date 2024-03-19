#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);


    int stime;
    int etime;
    if (a <= c) {
        stime = c;
    } else {
        stime = a;
    }
    if (b <= d) {
        etime = b;
    } else {
        etime = d;
    }
    printf("%d", (etime - stime>=0 ? etime-stime :0));



    return 0;

}