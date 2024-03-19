#include <stdio.h>
int main()
{
    int a,b,k,i,j=0,c[10],lar;
    scanf("%d %d %d",&a,&b,&k);
    if(a>b)
    lar=a;
    else
    lar=b;
    for(i=1;i<=lar;i++)
    {
        if(a%i==0&&b%i==0)
        {
            c[j]=i;
            j++;
        }
   }   
    printf("%d",c[k-1]);
    return 0;
}
