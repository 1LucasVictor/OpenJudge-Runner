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
        A--;
        if ( A<B)
        {
            A = A+t;
            count++;
        }
    }
    printf("%d\n",count);
    
    return 0;
}
