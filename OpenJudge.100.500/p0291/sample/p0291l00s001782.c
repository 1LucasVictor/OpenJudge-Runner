#include <stdio.h>

#define MAX 200000

int main(void)
{
    int i, j;

    long rate[MAX];

    int data_num;
    scanf("%d", &data_num);

    for (i = 0; i < data_num; i++) {
        scanf("%ld", rate + i);
    }

    long max = 0;
    for (i = 0; i < data_num - 1; i++) {
        for (j = i + 1; j < data_num; j++) {
            max = (rate[j] - rate[i] > max)? rate[j] - rate[i]: max;
        }
    }

    printf("%ld\n", max);

    return 0;
}