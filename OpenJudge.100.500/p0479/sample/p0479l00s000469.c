#include<stdio.h>
int m[1000000];
int main()
{

    int a,b,i,j;

    scanf("%d",&a);
    for(j=1 ; j<a ; j++)
    {
        scanf("%d",&b);
        m[b]++;
    }
    for(i=1 ; i<=a ; i++)
    {
        printf("%d\n",m[i]);
    }




    return 0;
}
