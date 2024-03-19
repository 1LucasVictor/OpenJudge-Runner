#include<stdio.h>
int main()
{
    int i, j;
    scanf("%d %d", &i, &j);
    if(i<=8)
    {
        if(j<=8)
            printf("Yay!\n");

        else
            printf(":(");
    }
    else
        printf(":(");
    return 0;
}
