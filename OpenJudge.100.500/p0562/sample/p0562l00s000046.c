#include<stdio.h>

int main()
{
    int A, B;
    scanf("%d %d",&A, &B);
    int count=1;
    int t = A;

    for ( int i=0 ; ; i++ )
    {
        if ( A>=B )
        {
            break;
        }
        else 
        {
            A = A+t-1;
            count++;
        }
    }
    printf("%d\n",count);
    
    return 0;
}
