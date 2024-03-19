#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n,a,b;
    scanf("%d %d %d",&n,&a,&b);

    a *= n;
    if(a>b){
        printf("%d\n",b);
    }else
    {
        printf("%d\n",a);
    }
    

    return 0;
}