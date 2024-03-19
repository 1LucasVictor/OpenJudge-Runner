#include <stdio.h>

int main() {
    int A, B;
    int n = 1;
    int a = 0;
    
    scanf("%d %d", &A, &B);
    a = A;
    
    while(1){
        if(a < B){
            a = (a - 1) + A;
            n++;
        }
        else{
            break;
        }
    }
    
    printf("%d\n", n);
    
    return 0;
}