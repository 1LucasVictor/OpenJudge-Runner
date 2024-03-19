#include<stdio.h>
int main(void){
    int H,A,count=0;
    scanf("%d%d",&H,&A);
    while(H>0){
        count++;
        H-=A;
    }
    printf("%d",count);
    return 0;
}