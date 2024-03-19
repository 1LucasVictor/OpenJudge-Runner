#include <stdio.h>

int NumberOfAttacks(unsigned short H,unsigned short A)
{
    int number_of_attacks_required=0 ;
    
    if((H > 0) && (H <= 10000) && (A > 0) && (A <= 10000))
    {
        while((H > 0) && (H <= 10000))
        {
            H = H - A;
            number_of_attacks_required++;
        }
        return number_of_attacks_required;
    }
    else
    {
        return 0;
    }
}


int main()
{
    unsigned short a[2];
    scanf("%d %d", &a[0], &a[1]);
    printf("%d",NumberOfAttacks(a[0], a[1]));
    return 0;
}