#include<stdio.h>
int main(void){
    int h,n,a[1000],i,total=0;
    scanf("%d",&h);
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        total+=a[i];
    }

    if(total>=h) printf("Yes");
    else printf("No");
    return 0;

}