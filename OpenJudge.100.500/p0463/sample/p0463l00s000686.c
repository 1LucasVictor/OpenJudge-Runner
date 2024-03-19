/* ex3_2
	kanon */

#include <stdio.h>

int main(void)
{

    //与えられる値を入れる変数を宣言
    int num;

    //変数に値を入力する
    scanf("%d", &num);

    //Nの１の位の値で分岐させる
    if (num % 10 == 3)
    {
        printf("bon\n");
    }
    else if (num % 10 == 0 || num % 10 == 1 || num % 10 == 6 || num % 10 == 8)
    {
        printf("pon\n");
    }
    else
    {
        printf("hon\n");
    }

    return 0;
}
