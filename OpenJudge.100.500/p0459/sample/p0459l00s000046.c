#include <stdio.h>
int main()
{
    int a,b,c,d,e,n,m=0;
    scanf("%d%d",&a,&b);
    if(b%2==0&&a*4>=b&&a*2<=b){

        printf("Yes\n");
    }
    else{
        printf("No\n");
    }

    return 0;
}