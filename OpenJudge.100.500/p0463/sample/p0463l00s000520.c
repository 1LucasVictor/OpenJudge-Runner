//
//  main.c
//  AtCoderProblems
//
//  Created by Gaska Wojtek on 2020/05/21.
//  Copyright © 2020 Gaska Wojtek. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int CheckFirstDigit(int *inputNumber)
{
    return *inputNumber = *inputNumber % 10;
}

char * CheckType(int firstDigit)
{
    if(firstDigit == 3)
    {
        return "bon";
    }
    else if (firstDigit == 2 || firstDigit == 4 || firstDigit == 5 || firstDigit == 7 || firstDigit == 9)
    {
        return "hon";
    }
    else
    {
        return "pon";
    }
}

void ReadInput(int * inputNumber)
{
    scanf("%d", inputNumber);
    
    while (*inputNumber > 999)
    {
        printf("Wrong input \n");
        ReadInput(inputNumber);
        if(*inputNumber < 999)
        {
          break;
        }
    }
}

int main(int argc, const char * argv[])
{

    int *inputNumber = malloc(sizeof(int));
    char *counterType;
    
    ReadInput(inputNumber);
    CheckFirstDigit(inputNumber);

    counterType = CheckType(*inputNumber);
    
    printf("%s \n", counterType);
    
    return 0;
}