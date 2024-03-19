
#include<stdio.h>
#define min(a,b) ((a) < (b) ? a : b)
#define max(a,b) ((a) > (b) ? a : b)
main()
{

    int a,b,c,a1,b1,c1;

    while(scanf("%d %d %d",&a,&b,&c)!=EOF){

    a1=min(min(a,b),c);
    c1=max(max(a,b),c);
    if(a1!=a && c1!=a ) b1=a;
    else if (a1!=b && c1!=b) b1=b;
    else b1=c;
        printf("%d %d %d\n",a1,b1,c1);
    }

    return 0;




}

