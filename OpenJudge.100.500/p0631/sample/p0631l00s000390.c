#include <stdio.h>

int main() {
    int A, B, X, temp;

    scanf("%d %d %d", &A, &B, &X);
  
    temp = A + (B - 1);
     
    if(temp > X && X > A){
        printf("YES\n");
    }
    else
        printf("NO\n");
    
    return 0;
}