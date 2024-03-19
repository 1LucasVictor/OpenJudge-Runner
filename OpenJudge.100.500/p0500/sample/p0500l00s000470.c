#include <stdio.h>

int main(void)
{

    int i_inputDigitNum;
    int i_inputJudgeCountNum;
    char c_existFlag = 1;

    scanf("%d%d", &i_inputDigitNum, &i_inputJudgeCountNum);

    int displayNum[i_inputDigitNum];

    for (int index = 0; index < i_inputDigitNum; index++)
    {
        displayNum[index] = 10;
    }

    int i_judgeNumDigit;
    int i_judgeNumber;
    for (int count = 0; count < i_inputJudgeCountNum; count++)
    {
        scanf("%d%d", &i_judgeNumDigit, &i_judgeNumber);
        if (i_inputDigitNum != 1 && i_judgeNumDigit == 1 && i_judgeNumber == 0)
        {
            c_existFlag = 0;
            break;
        }
        if (displayNum[i_judgeNumDigit - 1] == 10 || displayNum[i_judgeNumDigit - 1] == i_judgeNumber)
        {
            displayNum[i_judgeNumDigit - 1] = i_judgeNumber;
        }
        else
        {
            c_existFlag = 0;
        }
    }

    for (int index = 0; index < i_inputDigitNum; index++)
    {
        if (displayNum[index] == 10 && index == 0 && i_inputDigitNum != 1)
        {
            displayNum[index] = 1;
        }
        else if (displayNum[index] == 10)
        {
            displayNum[index] = 0;
        }
    }

    if (c_existFlag == 1)
    {
        for (int index = 0; index < i_inputDigitNum; index++)
        {
            printf("%d", displayNum[index]);
        }
    }
    else
    {
        printf("-1");
    }

}