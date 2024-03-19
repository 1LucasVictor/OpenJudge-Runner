#include<stdio.h>
int main()
{
    int k,a,b,s;
    scanf("%d %d %d",&k,&a,&b);
    if(a%k==0) printf("OK\n");
    else {
        s=a/k +1;
        if((k*s)<=b)
        {
            printf("OK\n");
        }
        else printf("NG\n");
    }

}
