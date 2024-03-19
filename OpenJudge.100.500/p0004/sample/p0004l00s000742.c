#include <stdio.h>
#define change(x, y) {long long t = x; x = y; y = t;}

int main(int argc, const char * argv[])
{

    long long input1, input2;
    long long cm = 0, cd = 0;
    long long i, j;
    
    while (scanf("%lld %lld", &input1, &input2) != EOF) {
        if (input1 < input2) {
            change(input1, input2);
        }
        for (i = input2; 1 <= i; i--) {
            if (input1 % i == 0 && input2 % i == 0) {
                cd = i;
                break;
            }
        }
        for (i = input1 / input2; i <= input2; i++) {
            if (input1 * i < input2) {
                break;
            }
            for (j = input1 / input2; j <= input1; j++) {
                if (input1 * i == input2 * j) {
                    cm = input1 * i;
                    break;
                }
                if (input1 * i < input2) {
                    break;
                }
            }
            if (cm != 0) {
                break;
            }
        }
        printf("%lld %lld\n", cd, cm);
        cd = 0;
        cm = 0;
    }
    return 0;
}