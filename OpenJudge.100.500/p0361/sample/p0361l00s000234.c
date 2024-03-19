#include <stdio.h>
int main()
{
    int h,s,m,S;
    scanf("%d",&S);
    if(0<=S&&S<86400){
        s= S%60;
        m = S/60 %60;
        h = S/3600 %60;
        printf("%d:%d:%d\n",h,m,s);
    }
    return 0;
}

