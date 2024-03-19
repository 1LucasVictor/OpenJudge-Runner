#include <stdio.h>

int main(void){
    int h,a;
    scanf("%d %d",&h,&a);
    int ans;
    if(a>=h){
        ans=1;
    }else{
        if(h%a==0){
            ans=h/a;
        }else{
            ans=h/a+1;
        }
    }
    printf("%d\n",ans);
}
