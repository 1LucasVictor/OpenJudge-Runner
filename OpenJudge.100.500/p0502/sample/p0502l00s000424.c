#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inputN, inputA;
    scanf("%d", &inputN);
    int intArray[100];

    for (int i = 0; i < inputN; i++)
    {
        scanf("%d", &inputA);
        intArray[i] = inputA;
    }

    for (int i = 0; i < inputN; i++)
    {
        if (intArray[i] % 2 == 0)
        {
            if (intArray[i] % 3 == 0 || intArray[i] % 5 == 0)
            {
                continue;
            }
            else
            {
                printf("DENIED \n");
                return 0;
            }
        }
    }
    printf("APPROVED \n");

    return 0;
}
