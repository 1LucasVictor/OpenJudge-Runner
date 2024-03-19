#include <stdio.h>
int main(void){
    // Here your code !
    int n,i,a[100]={0};
    scanf("%d",&n);
    
    for(i = 0;i < n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i = 0;i < n;i++)
    {
        printf("%d",a[n-i-1]);
        if(n-i-1 != 0)
        {
            printf(" ");
        }
        else puts("");
    }
    
    return 0;
}