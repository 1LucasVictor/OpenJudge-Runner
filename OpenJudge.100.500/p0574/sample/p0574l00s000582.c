#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int y;
    int z;
    int n;
    scanf("%d%d%d%d",&x ,&y ,&z ,&n);
    if(x%2==0&&y%2==0&&z%2==0&&n%2==0)
    printf("Good");
    else
    printf("Bad");
    return 0;
}
