#include <stdio.h>
#include <math.h>

int main(void)
{
    double inputN, inputK;
    long long int answer = 0;
    scanf("%lf%lf", &inputN, &inputK);
    if (inputN == inputK)
    {
        answer = 0;
    }
    else
    {
        answer = llround(inputN / inputK);
        if (inputN > inputK * answer)
        {
            answer = inputN - inputK * answer;
        }
        else if (inputN < inputK * answer)
        {
            answer = inputK * answer - inputN;
        }
        else
        {
            answer = 0;
        }
        
    }
    printf("%lld", answer);

    return 0;
}