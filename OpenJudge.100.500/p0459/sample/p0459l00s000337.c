#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {

    int x, y;

    scanf("%d %d", &x, &y);

    int isCheck = 0;

    if (y % 2 == 0) {

        for (int i = 0; i <= x; i++) {

            int turu = i;
            int kame = x - i;

            int mysum = turu * 2 + kame * 4;

            if (mysum == y) {
                isCheck = 1;
                break;
            }


        }
    }

    printf("%s", (isCheck == 0 ? "No" : "Yes"));


    return 0;
}
