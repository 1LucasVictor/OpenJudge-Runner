#include <stdio.h>

#define MAX_SIZE 100

int main(void)
{
    //宣言
    int arr[MAX_SIZE];      //数列の入力用
    int reverse[MAX_SIZE];  //数列の出力用
    int size;               //数列の長さ
    int i;                  //for文用 
    int arrIndex, revIndex; //数列の並べ替え用

    //数列の長さの決定
    scanf("%d", &size);

    //制約の範囲外ならエラーメッセージを出力
    if(size > MAX_SIZE)
    {
        printf("Invalid Input\n");
        return 0;
    }

    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }

    revIndex = 0;
    arrIndex = size - 1;

    //数列を並べ替える
    while(arrIndex >= 0)
    {
        reverse[revIndex] = arr[arrIndex];

        revIndex++;
        arrIndex--;
    }

    //数列の出力
    for(i=0; i<size; i++)
    {
        if(i==size-1)
        {
            printf("%d",reverse[i]);
        }
        else
        {
            printf("%d ",reverse[i]);
        }
    }

    printf("\n");

    return 0;
}

