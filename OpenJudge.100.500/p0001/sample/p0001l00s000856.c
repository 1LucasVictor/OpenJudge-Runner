#include <stdio.h>

int main(int argc, const char * argv[])
{
    int a, b, tmp, result;
    while (1) {
        result = 0;
        if (scanf("%d %d", &a, &b) == EOF) {
            break;
        }
        else {
            tmp = a + b;
            while(tmp != 0){
                tmp = tmp / 10;
                result++;
            }
            printf("%d\n", result);
        }
    }
    return 0;
}