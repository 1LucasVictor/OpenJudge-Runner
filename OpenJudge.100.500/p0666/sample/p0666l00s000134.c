#include <stdio.h>
 
 
int main(void)
{
    int x=0,A,B;
    scanf("%d %d %d",&x,&A,&B);
 
    if(A>=B)
    {
        printf("delicious\n");
    }
    else
    {
        if(x>=(B-A))
        {
            printf("safe\n");
        }
        else
        {
            printf("dangerous\n");
        }
    }
    return 0;
}