#include<stdio.h>
int main()
{
    int a,b,i,max;
    scanf("%d %d", &a, &b);
    max = a+b;
    int X[3]={(a+b),(a-b),(a*b)};
    for(i=0;i<3;i++)
    {
        if(X[i]>max)
            max = X[i];
    }

    printf("%d\n", max);

    return 0;
}
