#include <stdio.h>
#include <stdlib.h>

int main()
{
    int temp, flag, number;
    int arr[6];
    for (int i = 0; i < 6;i++)
    {
        scanf("%d", &number);
        arr[i] = number;
    }

    int k = arr[6];

    for (int i = 0; i < 6; i++)
    {
        temp = arr[i-1] - arr[i];
        for (int j = i; j < 6; j++)
            if (temp < k)
            {
                flag = 1;
            } else {
                flag = 0;
                break;
            }
    }

    if(flag == 1)
        printf("Yay!");
    else
        printf(":(");

    return 0;
}
