#include<stdio.h>

int main() {
    int h,i,n,arr[100000];
    scanf("%d %d",&h,&n);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++) {
        h -= arr[i];
    }
    if(h>0)
       printf("No\n");
    else
        printf("Yes\n");

    return 0;
}
