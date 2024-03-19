#include<stdio.h>
#include<math.h>

int main()
{
    int n,m,k;
    int read=0;
    int count=0;
    scanf("%d",&n);
    scanf("%d",&m);
    scanf("%d",&k);
    int a[n+1];
    int b[m+1];
    for(int i=0;i<=n-1;i++)
    {
        //printf("Book %d",i);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<=m-1;i++)
    {
       // printf("Book %d",i);
        scanf("%d",&b[i]);
    }

    for (int i=0;i<=n;i++)
    {
        read+= a[i];
        if (k<read) 
        {   //++count;
            break;}
        ++count;
    }

    for (int i=0;i<=m;i++)
    {
        read+= b[i];
        count++;
        if (k<read) break;
    }

    printf("%d",count);
    return 0;
}