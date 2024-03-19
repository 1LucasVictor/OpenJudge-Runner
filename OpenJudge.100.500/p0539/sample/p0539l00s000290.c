#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int main() {

    int n;

    scanf("%d", &n);

    int chkflg = 0;

    if (n <= 81) {

        for (int i = 1; i <= 9; i++) {

            if (n % i == 0) {

                int j = n / i;

                //printf("%d %d\n", i, j);

                if (j >= 1 && j <= 9) {
                    chkflg = 1;
                    break;
                }

            }
        }
    }

    printf("%s", (chkflg == 1 ? "Yes" : "No"));

    return 0;

}
