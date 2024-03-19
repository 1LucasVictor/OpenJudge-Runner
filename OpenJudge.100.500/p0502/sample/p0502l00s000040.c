#include<stdio.h>
int main()
{
    int a[1000],b=0,j=0,i,s,e,o;
    scanf("%d",&e);
    for(i=0;i<e;i++)
    {
        scanf("%d",&a[i]);
        s=0;
        if(a[i]%2==0)
            //j++
            //s=0;
            {
                if(a[i]%3!=0 && a[i]%5!=0) s=1;

                }
    }

    if(s==1)
        printf("DENIED\n");
    else
        printf("APPROVED\n");
    return 0;
}

