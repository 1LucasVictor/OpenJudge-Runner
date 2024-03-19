
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void ReadInput(int *inputA, int *inputB, int *inputC, int *inputK)
{
    scanf("%d %d %d %d", inputA, inputB, inputC, inputK);
}

void CountA(int * inputA, int * inputK , int * outputVal)
{
    while(*inputK != 0)
    {
        *inputA = *inputA - 1;
        *inputK = *inputK - 1;
        *outputVal = *outputVal + 1;
        if(*inputA == 0)
        {
            break;
        }
    }
}

void CountB(int *inputB, int * inputK, int *outputVal)
{
    while(*inputK != 0)
    {
        *inputB = *inputB - 1;
        *inputK = *inputK - 1;
        *outputVal = *outputVal + 0;
        if(*inputB == 0)
        {
            break;
        }
    }
}

void CountC(int *inputC, int * inputK, int *outputVal)
{
    while(*inputK != 0)
    {
        *inputC = *inputC - 1;
        *inputK = *inputK - 1;
        *outputVal = *outputVal + (-1);
        if(*inputC == 0)
        {
            break;
        }
    }
}

int main(int argc, const char * argv[])
{
    int * inputA = malloc(10*sizeof(int));
    int *inputB = malloc(10*sizeof(int));
    int *inputC = malloc(10*sizeof(int));
    int *inputK = malloc(10*sizeof(int));
    int outputVal = 0;
    int * outputValP = &outputVal;
    
    ReadInput(inputA, inputB, inputC, inputK);
    CountA(inputA,inputK, outputValP);
    CountB(inputB,inputK, outputValP);
    CountC(inputC,inputK, outputValP);
    
    printf("%d \n",outputVal);
    
    return 0;
}
