#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <math.h>
void main()
{
    double size = 2*pow(10,5);
    int isize = (int)(size);
    char S[isize];
    char T[isize];
    scanf("%s", S);
    scanf("%s", T);
    unsigned long long s = 0;
    for (size_t i = 0; i < strlen(T); i++)
    {
        if (S[i]!=T[i])
        {
            s++;
        }
    }
    printf("%lld\n",s);
}