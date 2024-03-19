#include<stdio.h>
int main()
{
    int a[1000],a1[1000],i=0,j,k,l,m;
    while(scanf("%d",&a[i])==1)
    {
        i++;
    }
    int len=i;
    k=0;
    j=0;
    while(1)
    {
        if(i==0)
            break;

       for(j=0;j<len;j++)
       {
            if(a[j]!=0&&a[j]!=12)
            {
                l=j;
            }
            else if(a[j]==0&&a[l]!=12)
            {
                a1[k]=a[l];
                a[j]=12;
                a[l]=12;
                k++;
                i=i-2;
            }
       }
    }
    for(m=0;m<k;m++)
        printf("%d\n",a1[m]);
    return 0;

}