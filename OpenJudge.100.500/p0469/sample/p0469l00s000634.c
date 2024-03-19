#include<stdio.h>

int main()
{
    int k,a,b;
    scanf("%d",&k);
    scanf("%d %d",&a,&b);
    if(k==1)printf("OK");
    else {
    if(a/k!=b/k)
    printf("OK");
    else printf("NG");
    }
    
    
    return 0;
}