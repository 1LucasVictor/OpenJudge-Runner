#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int A, B;
    char c;
    
    
    scanf("%d%c%d%c", &A, &c, &B, &c);
    
    if(abs(A+B)%2)
        printf("IMPOSSIBLE\n");
    else
    
        printf("%d\n", abs(A+B)/2);
    
    //system("pause");
    
    return 0;
}