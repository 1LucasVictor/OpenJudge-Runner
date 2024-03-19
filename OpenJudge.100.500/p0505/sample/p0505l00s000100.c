#include<stdio.h>
int main(){
    int h,n,sum=0;
    scanf("%d%d",&h,&n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
        sum = sum + array[i];
    }
    if(sum >= h) printf("Yes");
    else printf("No");
}