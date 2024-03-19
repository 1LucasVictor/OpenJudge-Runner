#include <stdio.h>

int main(void)
{
    int A, B, C;
    
    printf("");
    scanf("%d %d %d", &A, &B, &C);
    
    if(1<=A&&B&&C<=20&&B<=A)
    {
        if(C-(A-B)>0)
        {
          printf("%d", C-(A-B));
        }
        else
        {
            printf("%d", 0);
        }
    }
    else
    {
        printf("error");
    }
    
    return 0;
}
