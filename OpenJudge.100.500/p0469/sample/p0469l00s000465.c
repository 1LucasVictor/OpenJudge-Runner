#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int CountMultiplicationB(int *inputK, int *inputB)
{
   return *inputB / *inputK;
}

int CountMultiplicationA(int *inputK, int *inputA)
{
   return *inputA / *inputK;
}

void PrintOutput(int *inputK,int multiplyA,int multiplyB, int *inputA, int *inputB)
{
    if(*inputK * multiplyA  == *inputA)
    {
        printf("OK \n");
    }
    else if(*inputK * (multiplyA + 1) <= *inputB)
    {
        printf("OK \n");
    }
    else
    {
        printf("NG \n");
    }
}

void ReadInput(int *inputK, int *inputA, int *inputB)
{
    //printf("Enter the value of K: \n");
    scanf("%d", inputK);
    //printf("Enter the value of A and B: \n");
    scanf("%d %d", inputA, inputB);

}

int main(int argc, const char * argv[])
{
    int *inputK = malloc(sizeof(int)),
    *inputA = malloc(sizeof(int)),
    *inputB = malloc(sizeof(int));
    
    ReadInput(inputK, inputA, inputB);
    
    int multiplyA = CountMultiplicationA(inputK, inputA);
    int multiplyB = CountMultiplicationB(inputK, inputB);
    
    PrintOutput(inputK, multiplyA, multiplyB,  inputA, inputB);
    
    return 0;
}
