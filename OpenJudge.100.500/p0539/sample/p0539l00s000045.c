/*      ex3_4
        Tarara  */
#include <stdio.h>

int main(void)
{
    int number; //整数
    scanf("%d", &number);
    if (canFactorize(number))
        printf("Yes\n");
    else
        printf("No\n");
}

// 九九で表現できることを判定する関数
// numberが九九で表現できるならば1、そうでないなら0を返す
int canFactorize(int number)
{
    for (int i = 1; i < 10; ++i)
    {
        if (number % i == 0 && number / i < 10)
            return 1;
    }
    return 0;
}