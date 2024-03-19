#include <stdio.h>

int main () {
    int A, B;
    scanf("%d %d", &A, &B);

    if ((A + B) > 16) {
        printf(":(\n");
    } else {
        int lastPiece = 0;
        int i = 0;
        int add = 0;
        while (i < 16) {
            add = 1;
            if (A > 0 && lastPiece != 1) {
                A--;
                i++;
                lastPiece = 1;
                add = 0;
            }
            if (B > 0 && lastPiece != 2) {
                B--;
                i++;
                lastPiece = 2;
                add = 0;
            }

            if (add == 1) {
                i++;
            }
        }

        printf("%s\n", A > 0 || B > 0 ? ":(" : "Yay!");
    }
    return 0;
}
