#include <stdio.h>

int main(){

    int A, B;

    scanf("%d %d", &A, &B);

    if(A + B <= 16){
        if(A <= 8 && B <= 8){
            printf("Yay!\n");
        }else{
            printf(":(\n");
        }
    }



    return 0;
}
