#include<stdio.h>
int main()
{
    int k,a,b;
    scanf("%d%d%d",&k,&a,&b);
    int i;
    for(i=a; i<=b; i++)
        if(i%k==0)
        {
            printf("OK\n");
            return 0;
        }
    printf("NG\n");
}
