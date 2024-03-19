#include<stdio.h>
int main()
{
    int n,i,f=1;
    int a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        if(a[i]%2==0){
            if(a[i]%3==0||a[i]%5==0)
                continue;
            else {f=0;break;}
        }
    if(f==1)
        printf("APPROVED");
    else
        printf("DENIED");
    return 0;
}
