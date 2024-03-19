#include<stdio.h>
int main(void){
    int h,n;
    scanf("%d %d",&h,&n);
    int a[n],sum=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        sum = sum + a[i];
    }
    if(sum>=h){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;
}