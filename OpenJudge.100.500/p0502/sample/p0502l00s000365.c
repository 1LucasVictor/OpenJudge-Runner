#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    int f=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    
   {if(a[i]%2==0)
    {
        if(a[i]%3==0 || a[i]%5==0)
     {  
        f =0;
                }
        else
           {
        f=1;
        break;
                }
    }
        }
    if(f==0)
    printf("APPROVED\n");
    else if(f==1)
    printf("DENIED\n");
    return 0;
}