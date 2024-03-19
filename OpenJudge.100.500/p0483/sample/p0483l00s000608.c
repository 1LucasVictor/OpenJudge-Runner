#include<stdio.h>
int main ()
{
    int N ;
    int a = N/10;
    int b= b/10 ;
    scanf ("%d",&N) ;
    N=N%10 ;
    a=a%10 ;
    b=b%10 ;
    if (N%10==7||a%10==7||b%10==7)
    {
         printf("Yes\n");
    }
    else 
    {
        printf("No\n");
    }
    return 0 ;
}