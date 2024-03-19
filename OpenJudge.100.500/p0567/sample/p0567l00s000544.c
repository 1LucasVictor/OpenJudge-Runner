#include <stdio.h>

int main(){
    int A, B, C, ans;
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    
    ans = C - (A - B);
    printf("%d", ((0 < ans)? ans : 0 ));
    
    return 0;
}