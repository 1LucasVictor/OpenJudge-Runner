//MD. HASNAIN ALI (UNSOLVED)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX(a,b) (a>b? a:b)
#define MIN(a,b) (a<b? a:b)
#define SWAP(a,b) {       \
                    a=a+b;\
                    b=a-b;\
                    a=a-b;}
#define LL long long


int main()
{
    char x[11],y[11];
    int a,b,c=0,i;
    scanf("%s",x);
    scanf("%s",y);
    a=strlen(x);
    b=strlen(y);
    for(i=0;i<a;i++)
    {
        if(x[i]==y[i]) c++;
    }
    if(c==a) printf("Yes\n");
    else printf("No\n");

    return 0;
}
