#include <stdio.h>
int main()
{
    long long H;
    long N;
    short tmp;
    
    scanf("%ld %ld", &H, &N);
    
    while(N>0)
    {
        scanf("%hd ", &tmp);
        H = H - tmp;
        N--;
    }
    
    if(H > 0)
    {
        printf("No");
    }
    else
    {
        printf("Yes");
    }

    return 0;
}