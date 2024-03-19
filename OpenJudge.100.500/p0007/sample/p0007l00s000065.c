#include <stdio.h>

int main(int argc, const char * argv[])
{

    int sum;
    int cnt = 0;
    int i, j, k, l;
    
    while (scanf("%d", &sum) != EOF) {
        for (i = 0; i < 10; i++) {
            for (j = 0; j < 10; j++) {
                for (k = 0; k < 10; k++) {
                    for (l = 0; l < 10; l++) {
                        if (i + j + k + l == sum) {
                            cnt++;
                            break;
                        }
                    }
                }
            }
        }
        printf("%d\n", cnt);
        cnt = 0;
    }
    return 0;
}