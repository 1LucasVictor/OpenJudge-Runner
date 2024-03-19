#include<stdio.h>
int main()
{
unsigned long int x;
int i,a[]={500,5},t[]={1000,5},c,h=0;
    scanf("%ld",&x);
    for(i=0;i<2;i++)
    {
        c=x/a[i];
        x=x%a[i];
        h+=c*t[i];
    }
    printf("%d",h);

    return 0;
}
