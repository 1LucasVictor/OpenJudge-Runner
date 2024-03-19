#include <stdio.h>

int main ()
{
    int a, b, c ,d ,e, k, count = 0;
    int arr[10] = {};

    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &k);

    if(a < b && b < c && c < d && d < e)
    {
        arr[0] = b - a;
        arr[1] = c - a;
        arr[2] = d - a;
        arr[3] = e - a;
        arr[4] = c - b;
        arr[5] = d - b;
        arr[6] = e - b;
        arr[7] = d - c;
        arr[8] = e - c;
        arr[9] = e - d;

        for(int i = 0; i < 10; i++)
        {
            if(arr[i] >= k)
            {
                count = 1;
            }
            //printf("%d  %d\n", arr[i], count);
        }

        if(count == 1)
        {
            printf(":(\n");
        }
        else
        {
            printf("Yay!\n");
        }
    }

    return 0;
}
