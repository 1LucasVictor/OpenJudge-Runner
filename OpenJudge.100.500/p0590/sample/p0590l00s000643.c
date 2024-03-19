#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int a,b,c,d,e,k;
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&k);

    bool A=false,B=false,C=false,D=false;

    if(b-a<=k && c-a<=k && d-a<=k && e-a<=k)
        A=true;
    if(c-b<=k && d-b<=k && e-b<=k)
        B=true;
    if(d-c<=k && e-c<=k)
        C=true;
    if(e-d<=k)
        D=true;

    if(A&&B&&C&&D)
        printf("Yay!");
    else
        printf(":(");
}

