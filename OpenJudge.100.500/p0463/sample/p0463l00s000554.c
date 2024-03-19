/*  ex3_2
    hangan2020 */

#include <stdio.h>
int main(void){
    int number, final_digit;
    scanf("%d", &number);
    final_digit = number % 10;
    switch (final_digit)
    {
    case 2:
    case 4:
    case 5:
    case 7:
    case 9:
        printf("hon\n");
        break;
    case 0:
    case 1:
    case 6:
    case 8:
        printf("pon\n");
        break;
    case 3:
        printf("bon\n");
        break;
    }
    return 0;
}