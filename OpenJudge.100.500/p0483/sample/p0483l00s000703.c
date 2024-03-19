#include<stdio.h>
#include<math.h>


int main()
{
    int NUMBER;
    scanf("%d", &NUMBER);
    // This can be any integer
    int DIGIT_TO_FIND = 7;    // This can be any digit

    int thisNumber = NUMBER >= 0 ? NUMBER : -NUMBER;    // ?: => Conditional Operator
    int thisDigit;

    while (thisNumber != 0)
    {
        thisDigit = thisNumber % 10;    // Always equal to the last digit of thisNumber
        thisNumber = thisNumber / 10;   // Always equal to thisNumber with the last digit
        // chopped off, or 0 if thisNumber is less than 10
        if (thisDigit == DIGIT_TO_FIND)
        {
            printf("Yes\n");
            break;
        }
        else
        {
            printf("No\n");
            break;
        }

    }
    return 0;
}
