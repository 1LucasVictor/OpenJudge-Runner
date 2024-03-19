#include<stdio.h>
#include<math.h>
int main()
{
    int k,a,b,s;
    scanf("%d%d%d",&k,&a,&b);
    s=abs(a-b);
    if(a==b)
        printf("OK\n");
    else
    {
      if(s>=k)
        printf("OK\n");
    else
        printf("NG\n");
    }
    return 0;
}