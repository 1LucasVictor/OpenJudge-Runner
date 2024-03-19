#include <stdio.h>
#include <string.h>

int main()
{
    char a[200],o[9999];
    int scount, i, oi = 0, x, y = 0;
    scanf("%s", &a);

    while(strcmp("-",a) != 0) {
        scanf("%d", &scount);
        for(i = 0; i < scount; i++){
            scanf("%d", &x);
            y += x;
        }
        y %= strlen(a);
        for(i = y; i < strlen(a); i++) {
            o[oi++] = a[i];
        }
        for(i = 0; i < y; i++) {

            o[oi++] = a[i];
        }
        scanf("%s", &a);
        y = 0;
        o[oi++] = '\n';
    }
    o[oi++] = '\0';
    printf("%s", o);
    return 0;
}

