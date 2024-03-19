#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>



int main()

{
    int n,m,k,i;
    scanf("%d %d %d",&n,&m,&k);
    int a[n],b[m];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    i=0;
    int j=0,count=0,sum=0;
    while(sum+a[i]<=k&&i<n)
    {
        sum=sum+a[i];
        i++;
    }

    while(sum+b[j]<=k&&j<m)
    {
        sum=sum+b[j];
        j++;
    }

    count=i+j;

    while(i>0)
    {
        sum=sum-a[i-1];
        i--;
        while(sum+b[j]<=k&&j<m)
        {
               sum=sum+b[j];
               j++;
        }
        if(i+j>count)
        {count=i+j;}
    }
    printf("%d\n",count);


    return 0;
}


/*
presented by codeRumi
thanks for watching & being here,thank me later... :)
*/

