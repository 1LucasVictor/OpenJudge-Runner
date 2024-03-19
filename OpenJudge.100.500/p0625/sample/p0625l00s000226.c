#include <stdio.h>

int main(){
    int A, B;

    do{
        scanf("%d%d", &A, &B);
    } while (A > 16 || B > 16 );

    if(A > 8 || B > 8){
        printf(":(\n");
    } else {
        printf("Yay!\n");
    }

}
