#include<stdio.h>
int main(void){
    int n,i,cnt=0;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;n>i;++i)
    scanf("%d",&a[i]);
    for(i=0;n>i;++i){
        if(a[i]%2==0)
        b[i]=a[i];
        else
        {
            b[i]=0;
        }
        
    }
    for(i=0;n>i;++i){
        if(b[i]%3==0||b[i]%5==0)
        ++cnt;
    }
    if(cnt==i)
    printf("APPROVED");
    else
    {
        printf("DENIED");
    }
    return 0;
}