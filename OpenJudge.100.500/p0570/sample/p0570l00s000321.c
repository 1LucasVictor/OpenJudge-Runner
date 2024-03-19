#include <stdio.h>

int main(void){
    int A, B,k;

    scanf("%d %d", &A, &B);

        k = A+B;
        if(k%2==0)
            printf("%d\n", k/2);
        else
            printf("IMPOSSIBLE\n");
    
    return 0;
}