#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X,A,B;
    scanf("%d %d %d",&X,&A,&B);
    if(B<=A)
        printf("delicious\n");
    if(B>A&&B<=(A+X))
        printf("safe\n");
    if(B>(A+X))
        printf("dangerous\n");
    return 0;
}
