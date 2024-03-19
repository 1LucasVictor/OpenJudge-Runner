#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if(c>(a-b)){
        printf("%d", (c-(a-b)));
    }
    else{
        printf("%d", 0);
    }

    return 0;
}
