#include <stdio.h>
#include <string.h>

#define YEN_500 500
#define YEN_5 5
#define HAPPINESS_POINTS_LARGE 1000
#define HAPPINESS_POINTS_SMALL 5

int main()
{
    long moneyInput, fiveHundreadCoinsAmount, fiveCoinsAmount;

    scanf("%ld", &moneyInput);

    if (moneyInput / YEN_500 > 0)
    {   // Count amount of 500 and 5 Yen coins
        fiveHundreadCoinsAmount = moneyInput / YEN_500;
        fiveCoinsAmount = (moneyInput % YEN_500) / YEN_5;
        // Counts points for every coin
        printf("%ld \n", (fiveHundreadCoinsAmount * HAPPINESS_POINTS_LARGE) + (fiveCoinsAmount * HAPPINESS_POINTS_SMALL));
    }
    else if (moneyInput / YEN_500 <= 0)
    {
        // Count amount of 5 Yen coins
        fiveCoinsAmount = (moneyInput % YEN_500) / YEN_5;
        // Counts points for every coin
        printf("%ld \n",(fiveCoinsAmount * HAPPINESS_POINTS_SMALL));
    }

    return 0;
}
