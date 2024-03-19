/*ex3_2
    takafumi_ueki*/
#include <stdio.h>
int main(void){
    int x;
    scanf("%d",&x);
    //xを10割った余り、つまり1の位が何かによって条件分岐
    //”||”は、またはという意味
    if((x%10 == 2)||(x%10 == 4)||(x%10 == 5)||(x%10 == 7)||(x%10 == 9)){
        printf("hon\n");
    }
    if((x%10 == 0)||(x%10 == 1)||(x%10 == 6)||(x%10 == 8)){
        printf("pon\n");
    }
    if(x%10 == 3){
        printf("bon\n");
    }
    return 0;
}
