#include <stdio.h>

int main(int argc, char *argv[])
{
        int n[3];
        int i, j, tmp;

        scanf("%d %d %d", &n[0], &n[1], &n[2]);

        for (i = 0; i < 2; i++) {
                for (j = 0; j < 2 - i; j++) {
                        if (n[j] > n[j+1]) {
                                tmp = n[j+1];
                                n[j+1] = n[j];
                                n[j] = tmp;
                        }
                }
        }

        printf("%d %d %d\n", n[0], n[1], n[2]);

        return 0;
}