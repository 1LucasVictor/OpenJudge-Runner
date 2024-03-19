#include<stdio.h>
#include<stdlib.h>
int main()
{
    int X,Y;
    scanf("%d%d",&X,&Y);
    int a,b;
    a = (4*X - Y)%2;
    b = (4*X - Y)/2;
    if(a == 0 && b>0)
    {
        printf("Yes\n");
    } 
    else
    {
        printf("No\n");
    }
    
    
    
}