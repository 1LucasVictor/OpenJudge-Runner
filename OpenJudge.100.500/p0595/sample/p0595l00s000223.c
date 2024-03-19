#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char buffer[20];
    int  A, B, K;

    if (fgets(buffer, 20, stdin) != NULL) {
        A = atoi(strtok(buffer, " "));
        B = atoi(strtok(NULL, " "));
        K = atoi(strtok(NULL, " "));
    } else {
        return 1;
    }
    int max_num   = 0;
    if (A <= B) {
        max_num = A;
    } else {
        max_num = B;
    }

    int lcm_index = 0, lcm_value = 0;
    for (int i = 1; i <= max_num; i++) {
        if (lcm_index != K) {
            if (A % i == 0 && B % i == 0) {
                lcm_index += 1;
                lcm_value = i;
            }
        } else {
            printf("\n%d", lcm_value);
            break;
        }
    }
    return 0;
}