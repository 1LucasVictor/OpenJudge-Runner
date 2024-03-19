#include<stdio.h>
#include<math.h>
int main ()
{
    int i,j;
    scanf("%d%d",&i,&j);
    if((i+j)%2==0)
    {
        printf("%d\n",(i+j)/2);
    }
    else printf("IMPOSSIBLE\n");

    return 0;
}