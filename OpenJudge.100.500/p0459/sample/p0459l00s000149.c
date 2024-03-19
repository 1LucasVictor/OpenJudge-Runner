#include<stdio.h>
int main()
{
    int x,y;
    int turu;
    // 整数の入力
    scanf("%d %d", &x, &y);
    if(x*4 == y)
    {
        //x匹全て亀だったとき
        printf("Yes");
    }
    else
    {
        //鶴が一匹以上いる
        for (turu = 1; turu <= x; turu++)
        {
            if (turu * 2 + (x-turu) * 4 == y)
            {
                printf("Yes");
                break;
            }
        }
        if (turu > x)
        //条件を満たさなかった
        {
            printf("No");
        }
    }
    return 0;
}