#include<stdio.h>

int main(void)
{
    int h,n,i;

    scanf("%d%d",&h,&n);
    int a;
    for(i=0;i<n;i++){
        scanf("%d",&a);
        h=h-a;}
    if(h<=0) printf("Yes\n");
    else printf("No\n");
    return 0;
}
