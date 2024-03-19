#include <stdio.h>
int main(void)
{
    int a[1100000],x,y,i,k=0;

    scanf("%d%d",&x,&y);
    for (i = 0; i < y; i++){
        scanf("%d",&a[i]);
        k=k+a[i];
    }
    if(k>=x) printf("Yes\n");
    else printf("No\n");
    return 0;
}