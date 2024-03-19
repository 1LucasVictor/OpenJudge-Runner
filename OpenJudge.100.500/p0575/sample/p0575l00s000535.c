#include <stdio.h>

int main(void) 
{
    int A,X,a = 0,b =10;
    scanf("%d %d",&X,&A);
    if(X < A){
        printf("%d",a);
    }
    else if(X >= A)
    {
        printf("%d",b);
    }
    return 0;
}