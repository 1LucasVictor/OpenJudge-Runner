#include<stdio.h>
int main()
{
    int a,y=0;
    scanf("%d",&a);
    for(int i=0;i<3;i++)
    {
        int n;
        n=a%10;
        if(n==7)
            y=1;
    }
    if(y)
        printf("Yes");
    else
        printf("No");
}
