#include<stdio.h>

int main(void){
    int d,n,ans=1;
    scanf("%d %d",&d,&n);
    if(d==0){
        ans =n;
    }else if(d==1){
        ans = n*100;
    }else if(d==2){
        ans = n*10000;
    }
    printf("%d",ans);
    return 0;
}

