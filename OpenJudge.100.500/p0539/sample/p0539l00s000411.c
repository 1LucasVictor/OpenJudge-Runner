/* ex3_4
    suuxxu */

#include <stdio.h>

int main(void){
    int n, i, answer;
    
    // get inputs
    scanf("%d", &n);

    // calculate answer
    answer = 0; // answer is no
    for(i = 1; i < 10; i++){ // divide by 1 to 9
        if(n / i < 10 && n % i == 0){ // if divisible by i and Quotient is less than 10
            answer = 1; // answer is yes
        }
    }

    // output answer
    if(answer == 1){ // if answer is yes
        printf("Yes\n");
    }else{
        printf("No\n");
    }

    return 0;
}