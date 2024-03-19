#include <stdio.h>

int main(void)
{
    unsigned short int usi_inputData;

    scanf("%d", &usi_inputData);

    if (usi_inputData % 2 == 0)
    {
        printf("%d", usi_inputData / 2);
    }
    else
    {
        printf("%d", usi_inputData / 2 + 1);
    }

}