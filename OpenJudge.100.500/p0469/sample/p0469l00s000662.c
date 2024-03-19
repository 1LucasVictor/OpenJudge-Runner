#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Inputs
{
    int *inputK;
    int *inputA;
    int *inputB;
};

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
    struct Inputs Golf;
    Golf.inputA = malloc(sizeof(int));
    Golf.inputB = malloc(sizeof(int));
    Golf.inputK = malloc(sizeof(int));
    
    ReadInput(Golf.inputK, Golf.inputA, Golf.inputB);
    
    int multiplyA = CountMultiplicationA(Golf.inputK, Golf.inputA);
    int multiplyB = CountMultiplicationB(Golf.inputK, Golf.inputB);
    
    PrintOutput(Golf.inputK, multiplyA, multiplyB,  Golf.inputA, Golf.inputB);
    
    return 0;
}
