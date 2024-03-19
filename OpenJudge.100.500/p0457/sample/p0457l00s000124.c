#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>



int main()

{
    int n,m,k;
    scanf("%d %d %d",&n,&m,&k);
    int a[n],b[m];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    int i=0,j=0,count=0;
    while(1)
    {
        if(a[i]<b[j])
        {
            if(a[i]<=k)
            {
                k=k-a[i];
                count++;
                i++;
            }
            else break;
        }
        else
        {
            if(b[j]<=k)
            {
                k=k-b[j];
                count++;
                j++;
            }
            else break;
        }
    }
    printf("%d\n",count);


    return 0;
}


/*
presented by codeRumi
thanks for watching & being here,thank me later... :)
*/

