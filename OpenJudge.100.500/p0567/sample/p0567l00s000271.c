#include <stdio.h>
#include <string.h>
int main()
{
    int a,b,c,aSpace,extra;
    signed int x;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    aSpace = a-b;
    extra = aSpace - c;
    if(extra >= 0){
       printf("%d\n", 0);
    }else{
        printf("%d\n", extra*-1);
    }
    return 0;
}
