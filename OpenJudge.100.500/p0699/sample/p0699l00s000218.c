#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){

    int a,b,c,cont5=0,cont7=0;
    scanf("%d %d %d",&a,&b,&c);

    if(a==5)
        cont5++;
        if(b==5)
            cont5++;
            if(c==5)
                cont5++;
    if(a==7)
        cont7++;
        if(b==7)
            cont7++;
            if(c==7)
                cont7++;

    if(cont5==2 && cont7==1)
        printf("YES\n");
    else printf("NO\n");

    return 0;
}
