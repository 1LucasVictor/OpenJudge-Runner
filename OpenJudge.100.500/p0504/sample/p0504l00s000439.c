#include <stdio.h>

int main()
{
    unsigned short H, A, out;
    scanf("%hu %hu", &H, &A);
    if (H%A ==0)
    {
        out = H/A;
    }
    else
    {
        out = H/A +1;
    }
    
    printf("%hu", out);

    return 0;
}
