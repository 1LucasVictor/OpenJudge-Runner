#include<stdio.h>
int main( )
{
    int h , n , sum=0 ;
    scanf("%d%d" , &h , &n);
    
    int a  ;
    for( int i = 1 ; i <= n ; i++)
    {
        scanf("%d" , &a);
        sum += a ;
    }
    
    if( sum >= h)
        printf("Yes\n");
    else
        printf("No\n");
        
    return 0;
}
