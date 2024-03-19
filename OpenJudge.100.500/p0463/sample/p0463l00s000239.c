/*  ex3_2
    pptenshi  */

#include<stdio.h>

int main(void) {
    int num;
    int num_1;  // nの1の位

    // input
    scanf("%d", &num);

    num_1 = num % 10;

    //output
    switch (num_1) {
        case 2: case 4: case 5: case 7: case 9:
            printf("hon\n");
            break;
        case 0: case 1: case 6:  case 8:
            printf("pon\n");
            break;
        case 3:
            printf("bon\n");
            break;
    }

    return 0;
}