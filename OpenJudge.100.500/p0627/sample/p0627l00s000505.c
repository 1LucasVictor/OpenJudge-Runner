#include <stdio.h>
int main(void){
    int A, B, s;
    
    scanf("%d", &A);
    scanf("%d", &B);
    
    if(A + B > A - B && A + B > A * B){
        s = A + B;
        printf("%d", s);
    } else if (A - B > A + B && A - B > A * B){
        s = A - B;
        printf("%d", s);
    } else if (A * B > A + B && A * B > A - B){
        s = A * B;
        printf("%d", s);
    }
    
}
