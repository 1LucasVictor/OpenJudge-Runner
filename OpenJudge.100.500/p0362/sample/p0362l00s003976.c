#include<stdio.h>
main()
{

    int a,b,c,d;

    while(scanf("%d %d %d",&a,&b,&c)!=EOF){

    if(a<b && b<c)
        printf("Yes\n");
    else
        printf("No\n");
    }

    return 0;




}

