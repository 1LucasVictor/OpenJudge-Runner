#include <stdio.h>
#include <stdlib.h>

int checkSequenceNum(const void *n1, const void *n2)
{
    if (*(long *)n1 == *(long *)n2)
    {
        return 0;
    }
    else if (*(long *)n1 > *(long *)n2)
    {
        return -1;
    }
    else
    {
        return 1;
    }
}

int main(void)
{

    char c_checkFlag = 0;
    int l_inputSequenceCount;

    // 入力値の取得
    scanf("%ld", &l_inputSequenceCount);
    int l_inputSequence[l_inputSequenceCount];
    for (int index = 0; index < l_inputSequenceCount; index++)
    {
        scanf("%ld", &l_inputSequence[index]);
    }

    // ソートする
    qsort(l_inputSequence, l_inputSequenceCount, sizeof(int), checkSequenceNum);

    // 判定する
    for (int index = 0; index < l_inputSequenceCount; index++)
    {
        if (l_inputSequence[index] == l_inputSequence[index + 1])
        {
            c_checkFlag = 1;
            break;
        }
    }

    // 出力する
    if (c_checkFlag == 1)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }

    return 0;

}