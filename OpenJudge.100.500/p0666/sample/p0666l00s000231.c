#include <stdio.h>
int main()
{
    int A,B,X;
    if (1<=A&&A<=1e9&&-1<=B&&B<=1e9&&-1<=X&&X<=1e9);
    {
        scanf("%d %d %d",&X,&A,&B);
        if ((B-A)<=X&&B-A>=0) printf("safe\n");
        if (B-A<0)      printf("delicious\n");
        if ((B-A)>X)  printf("dangerous\n");
    }
    return 0;
}
