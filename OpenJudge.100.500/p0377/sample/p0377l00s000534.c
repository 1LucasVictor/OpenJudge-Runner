#include<stdio.h>
int main(void) {
    int a[52] = {0};
    char b[4] = {'S','H','C','D'};
    int d, n;
    char c;
    int e, f;
 
    scanf("%d", &n);
    for (f = 0; f < n; f++){
        scanf(" %c %d", &c, &d);
        for (e = 0; b[e] != c; e++){
            d += 13;
        }
        a[d - 1] = 1;
    }
 
    for (f = 0; f < 4; f++){
        for (e = 0; e < 13; e++) {
            if (a[f * 13 + e] == 0) {
                printf("%c %d\n", b[f], e + 1);
            }
        }
    }
 
    return 0;
}

