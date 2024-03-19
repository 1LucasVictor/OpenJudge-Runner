#include <stdio.h>
int main(void){
    // Here your code !
    int n,i,a[99]={0},b[99]={0};
    scanf("%d",&n);
    for(i = 0;i < n;i++)
    {
        scanf("%d",&a[i]);
        b[i] = a[i];
    }
    for(i = n-1;i >= 0;i--)
    {
        printf("%d",b[i]);
        if(i != 0)
        {
            printf(" ");
        }
else printf("\n");
    }
    return 0;
}