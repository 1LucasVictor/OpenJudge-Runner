#include<stdio.h>

int main(){

    int H,A,ans;
    scanf("%d %d",&H,&A);

    if (H%A == 0) ans = H/A;
    else  ans = H/A +1;
    
    printf("%d",ans);
    return 0;
}