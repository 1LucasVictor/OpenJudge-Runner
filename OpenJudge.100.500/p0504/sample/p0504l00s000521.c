#include <stdio.h>

int main()
{
    int A;
    int H;
    int Res=0;
    
    scanf("%d %d", &H, &A);
    Res = (H/A);
    if(H%A)
    {
        Res++;
    }
    printf("%d", Res);

    return 0;
}