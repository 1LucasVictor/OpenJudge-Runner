#include <stdio.h>

int main(void)
{

    char c_judgeFlag = 1;
    int i_inputNumCount;
    
    scanf("%d", &i_inputNumCount);

    int i_inputJudgeNumber[i_inputNumCount];

    for (int index = 0; index < i_inputNumCount; index++)
    {
        scanf("%d", &i_inputJudgeNumber[index]);
        if (i_inputJudgeNumber[index] % 2 == 0)
        {
            if (i_inputJudgeNumber[index] % 3 != 0 && i_inputJudgeNumber[index] % 5 != 0)
            {
                c_judgeFlag = 0;
                break;
            }
        }
    }

    if (c_judgeFlag == 1)
    {
        printf("APPROVED");
    }
    else
    {
        printf("DENIED");
    }

}