#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main()
{
    int a,b,k,n,m;
    scanf("%d",&k);
    scanf("%d %d",&a,&b);

    n = a/k;
    m = b/k;
    if(k==1)
    {
        printf("OK");
        return 0;
    }
    if(n==m)
    {
        if(a%k==0&&b%k==0)
        {
          printf("OK");
        return 0;  
        }
        printf("NG");
        return 0;
    }else{
        printf("OK");
        return 0;
    }

return 0;
}