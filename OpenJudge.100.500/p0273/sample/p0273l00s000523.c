#include<stdio.h>
 
int main()
{
    int n;
    scanf("%d",&n);
     
    int f[50];
     
    f[0]=f[1]=1;
     
    int i;
    for(i=2;i<=n;i++)//iは2以上でそれ以下は1
    {
        f[i]=f[i-1]+f[i-2];
    }
     
    printf("%d\n",f[n]);
     
    return 0;
}
