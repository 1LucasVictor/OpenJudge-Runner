#include <stdio.h>

int main(){

    int h,n,sum=0;
    scanf("%d%d",&h,&n);
    int a[n+10],i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    }

    if(sum>=h){
        printf("Yes");
        return 0;
    }

    printf("No");

    return 0;
}