#include <stdio.h>

int main()
{
    int X,A,B;
    scanf("%d%d%d",&X,&A,&B);
    if (A>=B) printf("delicious");
    else if ((B-A)>X) printf("dangerous");
    else printf("safe");
    return 0;
}
