#include <stdio.h>
#define MAX 1000

int main(void)
{
    char num[MAX];
    int sum, i;

    scanf("%s", num);

    while (num[0] != '0') {
        sum = 0;
        i=0;
        while (num[i] != '\0') {
            sum += (num[i] - '0');
            i++;
        }
        printf("%d\n", sum);
        scanf("%s", num);
    }
    return 0;
}
