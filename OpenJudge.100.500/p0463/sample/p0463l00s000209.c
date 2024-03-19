#include"stdio.h"
#include"stdlib.h"
#include"string.h"
#include"math.h"



int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    while(n>9)
    {
        n=n%10;
    }
    if(n==2 || n==4 || n==5 || n==7 || n==9)
        printf("hon");
    else if(n==0 || n==1 || n==6 || n==8)
        printf("pon");
    else if(n==3)
        printf("bon");
    return 0;
}
