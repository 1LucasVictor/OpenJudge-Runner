#include <stdio.h>

int main(){
    int x, i, n, flag, count;
    while (scanf("%d", &x) != EOF) {
        count = 0;
        for (i = 2; i <= x; i++) {
            flag = 0;
            for (n = 2; n <= i / 2 ; n++)
                if (i % n == 0) flag++;
            if (flag == 0) count++;
        }
        printf("%d\n", count);
    }
    return 0;
}