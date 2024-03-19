#include <stdio.h>

int main(int argc, const char * argv[]) {
    unsigned int N;
    int Number[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int Result[100];
    scanf("%u", &N);
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            Result[i * 9 + j] = Number[i] * Number[j];
            if (N == Result[i * 9 + j])
            {
                printf("Yes");
                return 0;
            }
        }
    }
    printf("No");
    return 0;
}
