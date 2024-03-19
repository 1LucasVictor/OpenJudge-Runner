#include "stdio.h"
#include "string.h"

int main()
{
    char input[201];
    char output[201];
    int h=0;
    int hMax=0;
    char frontBuff[200];
    char backBuff[200];
    int firstFlag=0;

    // 面倒な文字列の初期化処理
    int i = 0;
    for(i = 0; i < 200; i++)
    {
        input[i] = 0;
        output[i] = 0;
    }
    input[201] = '\0';
    output[201] = '\0';

    while(1)
    {
        scanf("%s",&input);
        if(input[0] == '-')
        {
            printf("%s\n", output);
            return 0;
        }
        else if((input[0] < '0') || (input[0] > '9'))
        {
            if(firstFlag == 0)

            {

        	firstFlag = 1;

            }

            else

            {

	        printf("%s\n", output);

            }
            for(i = 0; i < 200; i++)
            {
                output[i] = 0;
            }

            strncpy( output, input, strlen(input));
            hMax = 0;
            scanf("%d", &hMax);
            if(hMax > 100)
            {
                printf("%s\n", output);
                return 0;
            }
            continue;
        }
        else
        {
            // 文字コード -> 数値
            h = input[0]-'0';
        }

        strncpy(frontBuff, output, h);
        frontBuff[h] = '\0';
        strcpy(backBuff, &output[h]);

        strcpy(output, backBuff);
        strcat(output, frontBuff);
    }
}
