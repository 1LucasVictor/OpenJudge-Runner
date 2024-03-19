/*  ex3_4
    B30095    */
#include <stdio.h>

int main(void){
    int num;
    int condition = 0; // is num a product of integers between 1 and 9
    scanf("%d", &num);
    
    if(1 <= num && num <= 81){  // num should be between 1(1*1) and 81(9*9) 
        for (int i = 1; i <= 9; i++){
            int quotient = num / i;
            int remainder = num % i;
            if((1 <= quotient && quotient <= 9) && (remainder == 0))
                condition = 1;
        }
    }

    if(condition) 
        printf("Yes");
    else 
        printf("No");

    return 0;
}