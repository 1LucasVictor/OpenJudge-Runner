#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <float.h>
#include <math.h>

int main(int argc, char *argv[])
{
    char s[100001];
    int count_red, count_blue;
    int min;
    int i;
    int ans;

    scanf("%s", s);

    count_red = 0;
    count_blue = 0;

    for (i = 0; s[i] != 0; i++) {
        switch(s[i]) {
            case '0':
                count_red++;
                break;
            case '1':
                count_blue++;
                break;
            default:
                printf("INPUT ERROR (%d)\n", s[i]);
                exit(1);
        }
    }

    min = (count_red<count_blue)?count_red:count_blue;

    ans = 2 * min;

    printf("%d\n", ans);

    return 0;
}
