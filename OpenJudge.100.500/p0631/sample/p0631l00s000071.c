#include <stdio.h>
 
int main(void)
{
    int A, B, X;
    
    scanf("%d %d %d", &A, &B, &X);
    
    if (A <= X && A + B >= X) {
    	printf("YES");
    }
    else {
    	printf("NO");
    }
}