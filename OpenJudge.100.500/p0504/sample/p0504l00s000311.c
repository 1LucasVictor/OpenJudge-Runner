#include<stdio.h>

int main(void){

    int H,A,ans;

    scanf("%d %d",&H,&A);

    if(H % A == 0){
        ans = H/A;
    }else{
        ans = (H/A)+1;
    }

    printf("%d\n",ans);
    return 0;
}