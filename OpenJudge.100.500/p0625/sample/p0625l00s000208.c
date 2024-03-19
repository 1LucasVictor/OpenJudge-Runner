#include <stdio.h>

    int main(){
        int A,B;
        scanf("%d", &A);
        scanf("%d", &B);
        if (A + B <= 16) {
                if (A <= 8 && B <= 8 ){
                    printf("Yay!");
                } else {
                    printf(":(");
                }

        } else {
        }
    return 0;
}
