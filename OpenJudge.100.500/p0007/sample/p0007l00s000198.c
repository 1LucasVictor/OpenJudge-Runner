#include <stdio.h>
int new(int n){
    int a, b, c, d, result = 0;
    for (a = 0; a <= 9; a++) {
        for (b = 0; b <= 9; b++) {
            for (c = 0; c <= 9; c++) {
                for (d = 0; d <= 9; d++) {
                    if (a + b + c + d == n) {
                        result++;
                    }
                }
            }
        }
    }
    return result;
}
int main(int argc, const char * argv[])
{
    int n;
    while(scanf("%d", &n) != EOF){
        printf("%d\n", new(n));
    }
    return 0;
}