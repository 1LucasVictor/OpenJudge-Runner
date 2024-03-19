#include<stdio.h>
int main(){
    int h,n;
    scanf("%d%d",&h,&n);
    int i,a[n],total=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        total+=a[i];
    }
    if(h-total<=0){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;
}
