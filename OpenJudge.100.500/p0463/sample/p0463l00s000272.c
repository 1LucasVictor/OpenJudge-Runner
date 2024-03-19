/*  ex3_2
    supercomputerjoi    */

#include <stdio.h>

int main(void){

    int num;
    int firstDigit;

    // input N
    scanf("%d", &num);

    // calculate first digit
    firstDigit = num % 10;

    // conditional branch
    switch (firstDigit) {
        case 0:     // if num = 0
            printf("pon\n");
            break;
        case 1:     // if num = 1
            printf("pon\n");
            break;
        case 2:     // if num = 2
            printf("hon\n");
            break;
        case 3:     // if num = 3
            printf("bon\n");
            break;
        case 4:     // if num = 4
            printf("hon\n");
            break;
        case 5:     // if num = 5
            printf("hon\n");
            break;
        case 6:     // if num = 6
            printf("pon\n");
            break;
        case 7:     // if num = 7
            printf("hon\n");
            break;
        case 8:     // if num = 8
            printf("pon\n");
            break;
        case 9:     // if num = 9
            printf("hon\n");
            break;
    }

    return 0;
}