#include<stdio.h>
#include<string.h>
int main()
{
    int a[101],b[101],n,i,j=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            b[j]=a[i];
            j++;
        }
    }
    b[j]='\0';
    int f=1;
    i=0;
    while(b[i]!='\0')
    {
        if(b[i]%3==0||b[i]%5==0) i++;
        else
        {
            f=0;
            break;
        }
    }
    if(f==1) printf("APPROVED");
    else printf("DENIED");
    return 0;
}
