#include <stdio.h>

int main(void) {
    int A, B;
    int n = 0;
    int a = 0;
    
    scanf("%d %d", &A, &B);
    a = A;
    
    while(1){
        if(B == 1){
            break;
        }
        if(a < B){
            a = (a - 1) + A;
            n++;
        }
        else{
            n++;
            break;
        }
    }
    
    printf("%d\n", n);
    
    return 0;
}
