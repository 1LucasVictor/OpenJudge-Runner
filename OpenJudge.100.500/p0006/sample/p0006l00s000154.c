#include <stdio.h>

int main (void)
{
    int debt = 100000;
    int weeks, interest;
    int i;

    scanf("%d", &weeks);

    for(i = 1; i <= weeks; i++){
        interest = debt * 5 / 100;
        if(interest % 1000 >= 5){
            interest /= 1000;
            interest++;
            interest *= 1000;
        }
        else{
            interest /= 1000;
            interest *= 1000;
        }
        debt += interest;
    }
    printf("%d\n", debt);

    return (0);
}
