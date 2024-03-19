#include<stdio.h>
#include<stdlib.h>

int main(void){
    int H,N,A;
    int ans;

    scanf("%d",&H);
    scanf("%d",&N);

    ans=0;
    for(int i=0;i<N;i++){
        scanf("%d",&A);
        ans+=A;
    }

    if(ans >= H){
        printf("Yes");
    }else{
        printf("No");
    }

    return 0;
}