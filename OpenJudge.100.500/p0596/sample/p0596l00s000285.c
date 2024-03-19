#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n[100000], cnt, ans = 0, num[2];
    num[0] = 0, num[1] = 0;

    for (int i = 0; i < 100000; i++)
    {
        if ((n[i] = getchar()) == '\n')
        {
            cnt = i;
            break;
        }

        if (n[i] == 48)
        {
            num[0]++;
        }
        else
        {
            num[1]++;
        }
    }

    if (num[0] <= num[1])
    {
        ans = 2 * num[0];
    }
    else
    {
        ans = 2 * num[1];
    }

    printf("%d\n", ans);

    return 0;
    //0が48 1が49に対応
}