#include <stdio.h>
int main()
{
    int A,B,C;
    scanf("%d%d%d",&A,&B,&C);
    if((B+C)>=A)
    {
        printf("%d\n",(B+C)-A);
    }
    else
        {
            printf("0\n");
        }
    return 0;
}
