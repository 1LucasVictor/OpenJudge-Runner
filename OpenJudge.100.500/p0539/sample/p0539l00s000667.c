/*  ex3_4 81
    pandacodeb  */

#include <stdio.h>

int main(void){
    int num;
    scanf("%d", &num);
    //if it is more than 9x9 -> No
    if (num > 81)
        printf("No\n");

    //if it is a digit (0~9) -> Yes
    else if (num < 10)
        printf("Yes\n");

    //if it is between 10~80    
    else{
        //try divide num with 2,3,...,9
        for (int digit = 2; digit < 10; digit++){
            //if there is any divisible digit and its quotient < 10 -> Yes
            if (num%digit == 0 && num/digit < 10){
                printf("Yes\n");
                break;
            }
            //if no divisible digit at all -> No
            if (digit == 9)
                printf("No\n");
        }
    }
    return 0;
}