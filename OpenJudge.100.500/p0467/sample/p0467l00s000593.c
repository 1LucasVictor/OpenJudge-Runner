
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void ReadInput(int *inputA, int *inputB, int *inputC, int *inputK)
{
    scanf("%d %d %d %d", inputA, inputB, inputC, inputK);
}

void CountA(int * inputA, int * inputK , int * outputVal)
{
    while(1)
    {
        if(*inputA == 0)
        {
            break;
        }
        else if (*inputK == 0)
        {
            break;
        }
        *inputA = *inputA - 1;
        *inputK = *inputK - 1;
        *outputVal = *outputVal + 1;
    }
}

void CountB(int *inputB, int * inputK, int *outputVal)
{
    while(1)
    {
        if(*inputB == 0)
        {
            break;
        }
        else if (*inputK == 0)
        {
            break;
        }
        
        *inputB = *inputB - 1;
        *inputK = *inputK - 1;
        *outputVal = *outputVal + 0;
    }
}

void CountC(int *inputC, int * inputK, int *outputVal)
{
    while(1)
    {
        if(*inputC == 0)
        {
            break;
        }
        else if (*inputK == 0)
        {
            break;
        }
        *inputC = *inputC - 1;
        *inputK = *inputK - 1;
        *outputVal = *outputVal + (-1);
    }
}
void FreeMemory(int *inputA, int *inputB,int *inputC, int * inputK)
{
    free(inputA);
    free(inputB);
    free(inputC);
    free(inputK);
}

int main(int argc, const char * argv[])
{
    int * inputA = malloc(10*sizeof(int));
    int *inputB = malloc(10*sizeof(int));
    int *inputC = malloc(10*sizeof(int));
    int *inputK = malloc(10*sizeof(int));
    int outputVal;
    int * outputValP = &outputVal;
    
    ReadInput(inputA, inputB, inputC, inputK);
    CountA(inputA,inputK, outputValP);
    CountB(inputB,inputK, outputValP);
    CountC(inputC,inputK, outputValP);
    
    FreeMemory(inputA, inputB, inputC, inputK);
    
    printf("%d \n",outputVal);
    
    return 0;
}
