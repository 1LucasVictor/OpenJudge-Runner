#include<stdio.h>
void main()
{
    int x,y,min,max;
    scanf("%d",&x);
    scanf("%d",&y);
    max=x*4;
    min=x*2;
    if(y<=max && y>=min && y%2==0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}
