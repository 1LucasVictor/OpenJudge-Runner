#include <stdio.h>

int main()
{
    int inputN, inputA;
    scanf("%d", &inputN);
    int intArray[100];

    // Create an array to store the input
    for (int i = 0; i < inputN; i++)
    {
        scanf("%d", &inputA);
        intArray[i] = inputA;
    }

    // Check for values inside the loop
    for (int i = 0; i < inputN; i++)
    {
        if (intArray[i] % 2 != 0)
        {
            continue;
        }
        
        if(!(intArray[i] % 3 == 0 || intArray[i] % 5 == 0))
        {
            printf("DENIED \n");
            return 0;
        }
    }
    printf("APPROVED \n");
    return 0;
}
