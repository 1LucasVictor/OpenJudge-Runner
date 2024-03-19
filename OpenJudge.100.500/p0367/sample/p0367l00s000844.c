#include <stdio.h>

int main()
{
    int input[3];
    int cnt = 0;

    scanf("%d %d %d",&input[0], &input[1], &input[2]);

    for (int i = input[0]; i <= input[1]; i++) {
        if ((input[2] % i) == 0) {
            cnt++;
        }
        else {
            /* NOP */
        }
    }

    printf("%d\n", cnt);

}
