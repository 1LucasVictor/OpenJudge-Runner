#include <stdio.h>
#include <string.h>

void PrintOutput(int inputK, int inputA, int inputB, int multiplyA, int multiplyB)
{
    if (inputK * multiplyA == inputA)
    {
        printf("OK \n");
    }
    else if (inputK * (multiplyA + 1) <= inputB)
    {
        printf("OK \n");
    }
    else
    {
        printf("NG \n");
    }
}

void StartProgram()
{
    int inputK, inputA, inputB, multiplyA, multiplyB;
    
    //printf("Enter the value of K \n");
    scanf("%d", &inputK);
    //printf("Enter the value of A and B \n");
    scanf("%d %d", &inputA, &inputB);
    
    if(inputK > 1000)
    {
        printf("Wrong input... \n");
        StartProgram();
    }
    else if(inputB > 1000)
    {
        printf("Wrong input... \n");
        StartProgram();
    }
    else if(inputA > inputB)
    {
        printf("Wrong input... \n");
        StartProgram();
    }
    
    multiplyA = inputA / inputK;
    multiplyB = inputB / inputK;
    
    PrintOutput(inputK, inputA, inputB, multiplyA, multiplyB);
}

int main(int argc, const char * argv[]) {
  
    StartProgram();
    
    return 0;
}