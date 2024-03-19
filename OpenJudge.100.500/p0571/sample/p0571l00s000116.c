#include<stdio.h>

main()
{

    int n,a,b,c;
    scanf("%d%d%d",&n,&a,&b);
    c=n*a;
    if(c>b){
        printf("%d",b);
    }
        else{
            printf("%d",c);
        }

    return 0;
}
