/*
gcc compile command
gcc a.c -o a
*/

/* Includes */
#include <stdio.h>

/* Prototypes */
void InputNum(void);
void CalcSum(void);
void OutputNum(void);

/* Valuables */
char input_num[1000][1001];
int count;
int output_num[1000];

/* Main */

int main ()
{
    InputNum();

    CalcSum();

    OutputNum();
}

/* Sub */
void InputNum(void)
{
    for (int i = 0; i < 1000; i++) {

        scanf("%s", input_num[i]);

        if (input_num[i][0] == '0') {
            count = i;
            break;
        }
        else {
            /* NOP */
        }
    }
}

void CalcSum(void)
{
    for (int i = 0; i < count; i++) {

        for (int j = 0; j < 1001; j++) {

            if ((int)input_num[i][j] == 0) {
                /* NOP */
            }
            else {

                output_num[i] += ((int)input_num[i][j] - 48);

            }
        }
    }
}

void OutputNum(void)
{
    for (int i = 0; i < count; i++) {

        printf("%d\n", output_num[i]);

    }
}
