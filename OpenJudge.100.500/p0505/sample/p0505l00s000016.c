#include<stdio.h>

int main(){
    int H,N,i,asum=0,Ai;
    scanf("%d %d",&H,&N);
    for(i=0;i<N;i++){
        scanf("%d",&Ai);
        asum+=Ai;
    }
    if(asum>=H)printf("Yes\n");
    if(asum<H)printf("No\n");
}