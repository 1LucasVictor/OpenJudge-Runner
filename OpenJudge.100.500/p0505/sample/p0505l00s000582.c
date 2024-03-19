#include<stdio.h>
int main()
{
    int h,n,i,s=0;
    scanf("%d %d",&h,&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        s+=a[i];
    }
    if(s>=h){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
}