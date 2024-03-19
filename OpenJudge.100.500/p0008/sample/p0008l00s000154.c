#include <stdio.h>

int main(void)
{
    int n, i, j, N[999998], c, a, t;
    
    while (scanf("%d", &n) != EOF) {
        a = 0;
        for (i = 0; i < n - 1; i++) {
            N[i] = i + 2;
        }
        for (i = 0; i < n - 1; i++) {
            while (N[i] < 0) {
                i++;
            }
            for (j = i + 1; j < n - 2; j++) {
                while (N[j] < 0) {
                    j++;
                }
                if (N[j] % N[i] == 0) {
                    N[j] = -1;
                }
            }
        }
        for (i = 0; i < n - 1; i++) {
            if (N[i] != -1) {
                a++;
            }
        }
        printf("%d\n", a);
    }
    return 0;
}