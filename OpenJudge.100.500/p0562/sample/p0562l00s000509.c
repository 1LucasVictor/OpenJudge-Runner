#include <stdio.h>

int main(void)
{
    int A, B;
    char c;
    
    
    scanf("%d%c%d%c", &A, &c, &B, &c);
    
    
    if(B%A)
        printf("%d\n", B/A+1);
    else
        printf("%d\n", B/A);
    
    
    //system("pause");
    
    return 0;
}