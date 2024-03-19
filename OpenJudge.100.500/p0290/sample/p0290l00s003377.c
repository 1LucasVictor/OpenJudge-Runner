#include <float.h>
#include <stdbool.h>
#include <stdio.h>

bool IsPrime(int Number)
{
    double Quotient = DBL_MAX;
    for (double Denominator = 2.;
         Denominator < Number; Denominator += 1.)
    {
        if (Quotient <= Denominator)
        {
            return true;
        }
        Quotient = Number / Denominator;
        int Truncated = Quotient;
        if (Quotient == Truncated)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int InputCount = 0;
    scanf("%d", &InputCount);
    size_t Count = 0;
    for (int i = 0; i < InputCount; ++i)
    {
        int Input = 0;
        scanf("%d", &Input);
        if (IsPrime(Input))
        {
            ++Count;
        }
    }
    printf("%d\n", Count);
    return 0;
}

