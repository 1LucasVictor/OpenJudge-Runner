#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[])
{
    int inputN = 0;
    char stringArray[10];
    
    // Checks if the imput value is between 100 and 1000. If not, asks again about inserting the value.
    
      scanf("%d", &inputN);
      if(inputN < 100 || inputN > 1000)
      {
          printf("Wrong Input \n");
          return 0;
      }
    
    
    // In order to find '7' digit inside the inputed int value it program converts from int to string array.
    sprintf(stringArray, "%d", inputN);
    
    long len = strlen(stringArray);
    int digitCounter = 0;
    
    for(int i = 0; i < len; i++)
    {
        if(stringArray[i] == '7')
        {
            digitCounter++;
        }
    }
    
    if(digitCounter > 0)
    {
        printf("Yes \n");
    }
    else
    {
        printf("No \n");
    }
    
    return 0;
}
