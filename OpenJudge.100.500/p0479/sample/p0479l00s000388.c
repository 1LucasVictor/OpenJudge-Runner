#include <stdio.h>


int main()
{

    int a[200001];
    int b;
    scanf("%d", &b);
    int c = 0;

    for (int i = 0; i < b; i++)
    {

        a[i]=0;
    }

    for (int i = 0; i < b-1; i++)
    {
        
        scanf("%d", &c);
        a[c-1]++;
    }

    for (int i = 0; i < b; i++)
    {

        printf("%d", a[i]);
        printf("\n");
    }


}