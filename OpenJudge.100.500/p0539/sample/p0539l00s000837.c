/*  ex3_4
    supercomputerjoi    */

#include <stdio.h>

int main(void){

    int num;
    int count;  // loop count
    char yesOrNo = 'n'; // flag

    // input N
    scanf("%d", &num);

    // check N can be divided each number
    for(count = 1; count <= 9; count++){
        if(num % count == 0){
            // check another one is under 10
            if(num / count < 10){
                // change flag
                yesOrNo = 'y';
            }
        }
    }

    // branch by flag
    if(yesOrNo == 'y'){
        printf("Yes\n");
    }else{
        printf("No\n");
    }

    return 0;
}