#include <stdio.h>
#define MAX 10
int main(){
    int n, count = 0, a, b, c, d;
    
    while (scanf("%d", &n) != -1) {

        for (a = 0; a < MAX; a++) {
            for (b = 0; b < MAX; b++) {
                for (c = 0; c < MAX; c++) {
                    for (d = 0; d < MAX; d++) {
                        if (n == a + b + c + d){ count++;}
                    }
                }
            }
        }
        printf("%d\n", count);
        count = 0;
    }
    return 0;
}