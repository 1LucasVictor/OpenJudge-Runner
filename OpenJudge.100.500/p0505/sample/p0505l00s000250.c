#include<stdio.h>
int main(){
    int h,n;
    scanf("%d%d",&h,&n);
    int sum=0,a[n+1];
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    if(sum>=h)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}