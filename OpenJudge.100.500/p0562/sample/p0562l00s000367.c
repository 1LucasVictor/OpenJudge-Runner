#include <stdio.h>

int main(void)
{
    int A, B;
    char c;
    int ctr = 0;
    
    
    scanf("%d%c%d%c", &A, &c, &B, &c);
    
    
    B -= 1;
    
    while(B > 0)
    {
        B += 1;
        B -= A;
        
        ctr++;
    }
    
    
    printf("%d\n", ctr);
    
    
    //system("pause");
    
    return 0;
}