#include <stdio.h>
#include <ctype.h>
 
int main() {
    char str[1001];
    int i, sum;
    while (fgets(str, 1001, stdin) && str[0] != '0') {
        sum = 0;
        for (i = 0; str[i] != '\n'; i++) {
            sum += str[i] - 48;
        }
        printf("%d\n", sum);
    }
    return 0;
}