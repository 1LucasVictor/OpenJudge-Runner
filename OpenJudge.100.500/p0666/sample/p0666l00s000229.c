#include <stdio.h>
#include <string.h>

int main(void)
{
    int x,a,b;
    scanf("%d %d %d",&x,&a,&b);
    if(b-a>x) printf("dangerous");
    else if(b<=a) printf("delicious");
    else printf("safe");
    return 0;
}
