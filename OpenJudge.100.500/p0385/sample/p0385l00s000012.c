#include <stdio.h>
#include <string.h>

int main() {
    char in[1010];

    int sum;

    while (scanf("%s", &in)) {
        sum = 0;

        if (strlen(in) == 1 && in[0] == '0')
            break;

        for (int i = 0; i < strlen(in); ++i) {
            sum += in[i] - '0';
        }

        printf("%d\n", sum);
    }
    return 0;
}

