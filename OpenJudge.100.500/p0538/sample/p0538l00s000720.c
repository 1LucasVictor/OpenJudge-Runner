#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,B;
    scanf("%d %d",&A,&B);
    if(A<10&&B<10&&A>0&&B>0)
    {
       printf("%d",A*B);
    }
    else
    {
        printf("-1");
    }
    return 0;
}
