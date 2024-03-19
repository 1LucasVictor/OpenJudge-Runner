#include <math.h>
#include <stdio.h>
#include <string.h>
char x[11], y[12];
int idct = 1 ;
int main(void) {
    scanf("%s", x);
    scanf("%s", y);
    for (int i = 0; i < strlen(x); i++) {
        if (x[i] != y[i]) {
            idct = 0;
            break;
        }
    }
    if (idct == 0) {
        printf("No\n");
    } else {
        printf("Yes\n");
    }
}