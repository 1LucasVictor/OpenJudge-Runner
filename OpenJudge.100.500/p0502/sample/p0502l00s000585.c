#include<stdio.h>
main()
{
    int n,a,i,b,c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if((a%2==0&&a&3!=0&&a%5!=0)||(a%3!=0&&a%2==0&&a%5!=0))
        {

            c=1;
            printf("DENIED");
            break;
        }

    }
        if(c==0)
        printf("APPROVED");

}
