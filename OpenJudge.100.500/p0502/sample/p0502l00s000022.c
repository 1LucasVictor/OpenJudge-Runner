#include<stdio.h>
int main()
{
    int a[101],b=0,j=0,i,s,e,o;
    scanf("%d",&e);
    for(i=0;i<e;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
            j++;
    }
       for(i=0;i<e;i++)
       {
            if(a[i]%2==0 && (a[i]%3==0 || a[i]%5==0))
            b++;

        }

    if(j==b)
        printf("APPROVED\n");
    else
        printf("DINIED\n");
    return 0;
}
