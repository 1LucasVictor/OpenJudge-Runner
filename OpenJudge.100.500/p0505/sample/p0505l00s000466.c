#include<stdio.h>

int main(){
    int h,n,sum=0;
    scanf("%d%d",&h,&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    if(sum>=h){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return 0;
}