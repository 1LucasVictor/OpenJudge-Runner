#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int CheckInput(char * inputString)
{
    int haveCorrVal = (strncmp(inputString, "ABC", 3) && strncmp(inputString, "ARC", 3));
    if(haveCorrVal == 0)
    {
      return 1;
    }
    else
    {
        printf("Wrong Input \n");
        return 0;
    }
}

void ReadInput(char * inputString)
{
    int corrInput;
    
    //printf("Enter the name of the contest: \n");
    scanf("%s", inputString);
    corrInput = CheckInput(inputString);
    if(corrInput == 0)
    {
        ReadInput(inputString);
    }
}

void PrintOutput(char * inputString)
{
    int isABC = !strncmp(inputString, "ABC", 3);
    if(isABC)
    {
        printf("ARC \n");
    }
    else
    {
        printf("ABC \n");
    }
}


int main(int argc, const char * argv[])
{
    char * inputString = malloc(3 * sizeof(char));
    
    ReadInput(inputString);
    PrintOutput(inputString);
    free(inputString);
    
    return 0;
}
