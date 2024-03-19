/*ex3_2
    takafumi_ueki*/
#include <stdio.h>
int main(void){
    int A;
    scanf("%d",&A);
    //Aを１０割った余り、つまり１の位が何かによって条件分岐
    //”||”は、またはという意味
        if((A%10 == 2)||(A%10 == 4)||(A%10 == 5)||(A%10 == 7)||(A%10 == 9)){
        printf("hon\n");
    }
    if((A%10 == 0)||(A%10 == 1)||(A%10 == 6)||(A%10 == 8)){
        printf("pon\n");
    }
    if(A%10 == 3){
        printf("bon\n");
    }
    return 0;
}
