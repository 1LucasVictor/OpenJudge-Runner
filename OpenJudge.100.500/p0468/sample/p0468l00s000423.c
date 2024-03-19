//MD. HASNAIN ALI (UNSOLVED)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX(a,b) (a>b? a:b)
#define SWAP(a,b) {       \
                    a=a+b;\
                    b=a-b;\
                    a=a-b; }
#define ll long long


int main()
{
    char x[4];
    scanf("%s",&x);
    
    if(strcmp(x,"ABC")==0) printf("ARC\n");
    else printf("ABC\n");
    
    return 0;
}
