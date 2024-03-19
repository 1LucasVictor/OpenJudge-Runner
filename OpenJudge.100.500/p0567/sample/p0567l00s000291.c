#include<stdio.h>

int main(void){
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    int ans = C-(A-B);
    if(ans>=0) printf("%d",ans);
    else printf("0");
    return 0;
}