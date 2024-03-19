
#include<stdio.h>

int main (void){

    int loan = 100000;

    int n ,i;


    scanf("%d",&n);

    for(i = 0 ;i < n ;i++){
        loan = loan / 100 * 105;

        if(loan % 1000 == 0){

        }else if(loan % 1000 != 0){
            loan = loan / 1000 * 1000 + 1000;
        }
        //printf("--%d--",loan);
    }

    printf("%d\n",loan);

    return 0;
}