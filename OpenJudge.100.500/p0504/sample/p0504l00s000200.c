#include<stdio.h>
int main(void){

    int H,A,count=0;
    scanf("%d %d",&H,&A);
    while(H>0){
        H -= A;
        count++;
    }
    printf("%d",count);
    return 0;
}