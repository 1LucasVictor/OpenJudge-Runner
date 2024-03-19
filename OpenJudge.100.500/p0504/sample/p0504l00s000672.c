#include<stdio.h>
#include<stdlib.h>

int main(void){
    int A,H;
    int ans;

    scanf("%d",&H);
    scanf("%d",&A);

    ans = H/A;

    if(H%A!=0){
        ans++;
    }

    printf("%d",ans);

    return 0;
}