#include<stdio.h>
int main(void)
{
    int k,a,b,i;
    scanf("%d%d%d",&k,&a,&b);
    for(i=a;i<=b;i++)
        if(i%k==0){
            printf("OK\n");
            return 0;
        }
    printf("NG\n");
    return 0;
}