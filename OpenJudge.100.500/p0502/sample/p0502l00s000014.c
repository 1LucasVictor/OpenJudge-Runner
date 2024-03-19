#include<stdio.h>
int main()
{
    int a,n,c=0,i,d=0,b[100]={0};
    scanf("%d",&n);
     for(i=0;i<n;i++)
     {
         scanf("%d",&a);
        if(a%2==0)
        {
        b[c]=a;
        c++;
        }
     }
     for(i=0;i<c;i++)
     {
         if(b[i]%3==0||b[i]%5==0)
            d++;
     }
     if(c==d)
        printf("APPROVED");
     else
        printf("DENIED");
}
