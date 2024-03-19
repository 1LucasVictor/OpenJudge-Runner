/*  ex3_4
    hangan2020 */

#include <stdio.h>
int main(void){
    int number, divider;
    scanf("%d", &number);
 
    //Devide the input number by 1,2,3..,10
    for (divider = 1; divider <= 10; ++divider){
    /*printf("%d\n", divider);*/
        //If there exist a number in 1,2,3..,10 that is divisble and the quotient is smaller than 10, print Yes
        if ((number % divider == 0) && (number / divider < 10) && (divider < 10)){
            printf("Yes\n");
            break;
        }
        //If there exist no number that satisfy the upper condition, print No
        else if(divider >= 10) {
                printf("No\n");
        }
        else{}
    }
    return 0;
}