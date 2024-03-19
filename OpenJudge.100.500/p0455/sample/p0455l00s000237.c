#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int sum=0;
    for(int i=1; i<4;i++)
    {
        sum = sum + pow(a,i);
    }
    printf("%d",sum);

}
