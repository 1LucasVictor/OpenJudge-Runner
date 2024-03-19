#include<stdio.h>
int main(){
    int h,n;
    int a[100000];
    int sum=0;
    scanf("%d %d",&h,&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        sum=sum+a[i];
    }
    if(h<=sum){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
}