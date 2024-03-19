#include <stdio.h>
int main()
{
    int a,b,k,i,j=0,c[10],s;
    scanf("%d %d %d",&a,&b,&k);
    if(a<b)
    s=a;
    else
    s=b;
    for(i=1;i<=s;i++)
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
