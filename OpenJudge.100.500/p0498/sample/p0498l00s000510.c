#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int x;
    scanf("%d",&x);
    if(x%2==0)
        printf("%d\n",x/2);
    else printf("%d\n",(x/2)+1);
    return 0;
}
