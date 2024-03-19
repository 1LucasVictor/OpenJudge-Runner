#include<stdio.h>
int main(void){
    int h,n,a[1000],i,total=0;
    if(scanf("%d",&h)==1&&scanf("%d",&n)==1);
    for(i=0;i<n;i++){
        if(scanf("%d",&a[i])==1);
        total+=a[i];
    }

    if(total>=h) printf("Yes");
    else printf("No");
    return 0;

}