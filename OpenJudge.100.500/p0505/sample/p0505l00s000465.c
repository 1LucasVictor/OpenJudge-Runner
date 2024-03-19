#include<stdio.h>

int main(void){
    int h,n,i,a;
    scanf("%d%d",&h,&n);
    for(i=0;i<n;i++){
        scanf("%d",&a);
        h -= a;
    }
    if(h<=0){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}
