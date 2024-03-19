#include <stdio.h>

int main()
{
    int input_n;
    int input_num[1000];
    int output_num[1000];

    scanf("%d", &input_n);
    for (int i = 0; i < input_n; i++) {
        scanf("%d", &input_num[i]);
    }

    for (int i = 0; i < input_n; i++) {
        output_num[i] = input_num[input_n - i - 1];
    } 

    for (int i = 0; i < (input_n - 1); i++) {
        printf("%d ", output_num[i]);
    }
    printf("%d\n", output_num[input_n -1]);
}
